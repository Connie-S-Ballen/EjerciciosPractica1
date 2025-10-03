#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int original = x;
        long long invertido = 0;
        while (x != 0) {
            int digito = x % 10;
            invertido = invertido * 10 + digito;
            x /= 10;
        }
        return original == invertido;
    }
};

int main(){
    Solution solution;
    
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;
    if (solution.isPalindrome(numero)) {
        cout << numero << " es un palindromo." << endl;
    } else {
        cout << numero << " no es un palindromo." << endl;
    }
}