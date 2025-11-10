#include <iostream>
using namespace std;

int main()
{
    float numero1; 
    float numero2; 
    float numero3;

    cout << "Digite o primeiro número: " << endl; 
    cin >> numero1; 
    
     cout << "Digite o segundo número: " << endl; 
     cin >> numero2; 
    
    cout << "Digite o terceiro número: " << endl; 
    cin >> numero3;
    
    if(numero1 > numero2 && numero1 > numero3) { 
        cout << "O primeiro número é maior: " << endl; 
} 
    else if(numero2 > numero1 && numero2 > numero3) { 
        cout << "O segundo número é maior: " << endl; 
} 
    else { 
        cout << "O terceiro número é maior:" << endl;
}
   
   return 0;
}
