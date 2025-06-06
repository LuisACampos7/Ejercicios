#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "Ingrese la cantidad de números: ";
    cin >> N;

    if (N <= 0)
    {
        cout << "La cantidad debe ser mayor que 0." << endl;
        return 1;
    }

    int numeros[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];

    for (int i = 1; i < N; i++)
    {
        if (numeros[i] > mayor)
            mayor = numeros[i];
        if (numeros[i] < menor)
            menor = numeros[i];
    }

    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;

    return 0;
}
