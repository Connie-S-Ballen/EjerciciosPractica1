#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Callback functions for different operations
float add(float a, float b) {
    return a + b;
}

float multiply(float a, float b) {
    return a * b;
}

float subtract(float a, float b) {
    return a - b;
}

float divideNums(float a, float b) {
    if (b == 0) {
        cout << "Error: no se puede dividir por cero." << endl;
        exit(1);
    }
    return a / b;
}

// Function that performs an operation using a callback
void performOperation(float (*callback)(float, float), float x, float y) {
    cout << "El resultado es: " << callback(x, y) << endl;
}

int main() {
    string op1_str, operador, op2_str;
    float op1, op2;

    cout << "Ingrese la operacion (separe cada parte con un espacio [10 - 3]): ";
    cin >> op1_str >> operador >> op2_str;

    op1 = atof(op1_str.c_str());
    op2 = atof(op2_str.c_str());

    if (op1_str != "0" && op1 == 0) {
        cout << "Error: primer numero no valido." << endl;
        return 1;
    }
    if (op2_str != "0" && op2 == 0) {
        cout << "Error: segundo numero no valido." << endl;
        return 1;
    }

    if (operador == "+") {
        performOperation(add, op1, op2);
    } 
    else if (operador == "-") {
        performOperation(subtract, op1, op2);
    } 
    else if (operador == "*" || operador == "x" || operador == "X") {
        performOperation(multiply, op1, op2);
    } 
    else if (operador == "/") {
        performOperation(divideNums, op1, op2);
    } 
    else {
        cout << "Error: operador no valido." << endl;
        return 1;
    }

    return 0;
}
