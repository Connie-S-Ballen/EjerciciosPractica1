#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Prototipo de la funcion
int CapturaNumero(int base);
// Alternativa con referencia a la variable
// Hacer referencia es cambiar el valor de la variable original
//int CapturaNumero(int& base);

// Funcion principal
int main()
{

   vector<string> msg {"Hola", "C++", "from", "VS Code", "y la extension C++!"};
   int numero_capturado;
   
   int base = 100;

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;

   numero_capturado = CapturaNumero(base);
   
   cout << "Numero: " << numero_capturado << endl; 
   cout << "Base: " << base << endl;
}

// Definicion de la funcion
// Alternativa con referencia a la variable
// Hacer referencia es cambiar el valor de la variable original
//int CapturaNumero(int& base)
int CapturaNumero(int base)
{
   int numero;
   cout << "Ingrese un numero: ";
   cin >> numero;
   base = base  + numero;
   return base;
}
