//Muestra en pantalla los números pares del 1 al 50.
#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 50; i++){
        if(i % 2 == 0){
            cout<< i<<endl;
        }
    }

    return 0;
}