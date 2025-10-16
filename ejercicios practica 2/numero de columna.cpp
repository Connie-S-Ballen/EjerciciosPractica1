#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for (int i = 0; i < columnTitle.length(); i++) {
            int value = columnTitle[i] - 'A' + 1;
            result = result * 26 + value;
        }
        return result;
    }
};

int main() {
    Solution s;
    string columnTitle;

    cout << "Ingrese el título de columna: ";
    cin >> columnTitle;

    int result = s.titleToNumber(columnTitle);

    cout << "El número de columna es: " << result << endl;

    return 0;
}