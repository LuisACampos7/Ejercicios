#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

    int numerosecreto = rand() % 50 + 1;
    int intento ;
    int intentos = 5;
    cout<< "adivina el numero secreto entre 1 y 50"<<endl;

    do{
        intentos--;
        cout << "ingrese su intento : ";
        cin>>intento;

        if(intento == numerosecreto){
            cout<<"Correcto!"<<endl;
        }
        else{
            cout<<"te quedan "<<intentos<<" intentos"<<endl;
        }
    }
    while (intentos != 0);
    
}