#include <iostream>
using namespace std;

int main(){
    int numero; 
    int respuesta;

    do{
        cout<<"ingrese un numero entre el 1 y el 10 "<<endl;
        cin>> numero;
        if (numero >= 1 && numero <= 10){
            cout<<"correcto!";
            respuesta = 'y';
        }
        else{
            cout<<"incorrecto, vuelvelo a intentar"<<endl;
            respuesta = 'n';
        }
    }
    while(respuesta != 'y');
    return 0;
}