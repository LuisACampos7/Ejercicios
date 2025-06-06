#include <iostream>
using namespace std;

int main(){
    int n, m = 0;
    cout<< "ingrese un numero"<<endl;
    cin>>n;
    for(int i = 1; i <= n; i++){
        m += i;
    }
    cout<<m;
    return 0;
}