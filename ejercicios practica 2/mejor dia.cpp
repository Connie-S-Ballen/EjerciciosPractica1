#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n <= 1) {
            return 0;
        }

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < n; i++) {
            int profitIfSellToday = prices[i] - minPrice;
            
            if (profitIfSellToday > maxProfit) {
                maxProfit = profitIfSellToday;
            }

            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
        }
        return maxProfit;
    }
};

int main() {
    Solution s;
    vector<int> prices;
    string input;
    cout << "Ingrese el vector de precios (ejemplo: [7, 1, 5, 3, 6, 4]): ";
    getline(cin, input);
    int num = 0;
    bool dentroNumero = false;

    for (int i = 0; i < input.size(); i++) {
        char c = input[i];
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
            dentroNumero = true;
        } else if (dentroNumero) {
            prices.push_back(num);
            num = 0;
            dentroNumero = false;
        }
    }

    if (dentroNumero) {
        prices.push_back(num);
    }
    int ans = s.maxProfit(prices);
    cout << "La máxima ganancia es: " << ans << endl;
    return 0;
}