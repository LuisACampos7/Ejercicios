#include <iostream>
using  namespace std;

int main(){
    int num, suma= 0;

    cout<<"ingresa ingresa numeros(ingresa 0 para terminar)";

    while(true){
        cin>> num;
        if (num == 0){
            break;
        }
        suma += num;
    }
    cout <<" la suma es : "<<suma;
    return 0;
}