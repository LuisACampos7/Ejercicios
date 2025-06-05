#include <iostream>
using namespace std;

int main(){
    int n, m = 1;
    cout <<"ingrese un numero"<<endl;
    cin >> n;
    for(int i = n; i > 0; i--){
        m *= i;
    }
    cout<<m;

    return 0;
}