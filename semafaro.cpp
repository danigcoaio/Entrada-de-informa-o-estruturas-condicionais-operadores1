#include <iostream>
using namespace std;

int main()
{
    string cor; 

    cout << "Digite a cor do semáfaro(verde, amarelo e vermelho): " << endl; 
    cin >> cor; 
    
    if(cor == "verde") { 
        cout << "Pode atrevessar!: " << endl; 
} 
    else if(cor == "vermelho" ) { 
        cout << "Não pode atrevessar: " << endl; 
} 
    else { 
        cout << "alerta: " << endl; 
}
   return 0;
}
