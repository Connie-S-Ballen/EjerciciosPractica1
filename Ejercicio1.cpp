#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msg {"Hola", "C++", "from", "VS Code", "y la extension C++!"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
}
