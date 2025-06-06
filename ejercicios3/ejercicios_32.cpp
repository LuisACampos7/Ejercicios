#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

    int numerosecreto = rand() % 100 + 1;
    int intento;

    cout<< "adivina el numero secreto entre 1 y 100"<<endl;

    do{
        cout <<"ingreese tu intento: ";
        cin>>intento;

        if(intento > numerosecreto){
            cout<<"intenta con un numero menor"<<endl;
        }
        else if(intento < numerosecreto){
            cout<<"intenta con un numero mas grande"<<endl;
        }
        else{
            cout<<"felicidades adivinaste el numero secreto: "<<numerosecreto<<endl;
        }
    }
    while (intento != numerosecreto);
    
    
}