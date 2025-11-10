#include <iostream>
using namespace std;

int main()
{
    int idade; 
    
    cout << "Digite sua idade: "; 
    cin >> idade; 
    
    if(idade >= 18 && idade <= 65 ) {
    cout << "Você é maior de idade!" << endl; 
    }
    else if(idade < 18){ 
        cout << "Você é menor de idade!" << endl; 
    } else {
        cout << "Você tem uma idade avançada!" << endl; 
    }
  
   
    return 0;
} 
