#include <iostream>
#include <vector>
#include <string>

using namespace std;

int CapturaNumero();

int main()
{

   vector<string> msg {"Hola", "C++", "from", "VS Code", "y la extension C++!"};
   int numero_capturado;

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;

   numero_capturado = CapturaNumero();
   
   cout << "Numero: " << numero_capturado;
}

int CapturaNumero()
{
   int numero;
   cout << "Ingrese un numero: ";
   cin >> numero;
   return numero;
}
