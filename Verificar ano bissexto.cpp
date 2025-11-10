#include <iostream>
using namespace std;

int main()
{
    int ano; 

    cout << "Digite a quantidade de dias do ano: " << endl; 
    cin >> ano; 
    
     
    if(ano == 366) { 
        cout << "O ano é bissexto: " << endl; 
} 
    else { 
        cout << "O ano não é bissexto:" << endl;
}
   return 0;
}

OU: 

#include <iostream>
using namespace std;

int main() {
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        cout << ano << " é bissexto." << endl;
    } else {
        cout << ano << " nao é bissexto." << endl;
    }

    return 0;
}

