#include <iostream>
using namespace std;

int main()
{
    int N;

    // Solicitar al usuario la cantidad de números
    cout << "Ingrese la cantidad de números: ";
    cin >> N;

    // Crear el arreglo con tamaño N
    int numeros[N];
    int suma = 0;

    // Leer los N números y almacenarlos en el arreglo
    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i]; // Sumar al total
    }

    // Mostrar la suma de los elementos
    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}
