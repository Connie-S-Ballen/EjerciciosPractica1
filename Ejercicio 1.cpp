#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Recorremos todos los pares posibles
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                // Si la suma de estos dos números es igual al target
                if (nums[i] + nums[j] == target) {
                    // Devolvemos los índices encontrados
                    return {i, j};
                }
            }
        }
    }
};

int main() {
    Solution solucion;

    // Ejemplo de uso
    vector<int> numeros = {2, 7, 11, 15};
    int objetivo = 9;

    vector<int> resultado = solucion.twoSum(numeros, objetivo);

    cout << "Indices: " << resultado[0] << " y " << resultado[1] << endl;

    return 0;
}
