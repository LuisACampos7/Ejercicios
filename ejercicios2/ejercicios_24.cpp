#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ingrese la cantidad de numeros que quire";
    cin >> n;

    int arreglo[n];
    for (int i = 0; i < n; i++)
    {
        cout << "ingrese el numero " << i + 1 << ":";
        cin >> arreglo[i];
    }

    int buscado;
    cout << "ingrese el numero que desea buscar ";
    cin >> buscado;

    for (int i = 0; i < n; i++)
    {
        if (arreglo[i] == buscado)
        {
            cout << "el numero " << buscado << " se encuentra en el arreglo";
        }
        else
        {
            cout << "el numero " << buscado << " no se encuentra en el arreglo";
        }
        break;
    }

    return 0;
}