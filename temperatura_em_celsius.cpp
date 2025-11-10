#include <iostream>
using namespace std;

int main()
{
    float temperatura; 
    
    cout << "Digite sua temperatura: "; 
    cin >> temperatura; 
    
    if(temperatura < 0 ) {
    cout << "Temperatura negativa!" << endl; 
    }
    else if (temperatura > 0) {
        cout << "Temperatura positiva" << endl; 
    } 
    else{ 
        cout << "Ponto de congelamento!" << endl; 
    }
  
   
    return 0;
}
