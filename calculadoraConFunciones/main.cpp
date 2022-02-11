#include <iostream>

using namespace std;

int obtenerSuma(int Valor1, int Valor2)
{
    return Valor1 + Valor2;
}
int obtenerResta(int Valor1, int Valor2)
{
    return Valor1 - Valor2;
}
int obtenerMultiplicacion(int Valor1, int Valor2)
{
    return Valor1 * Valor2;
}
int obtenerDivision(int Valor1, int Valor2)
{
    return Valor1 / Valor2;
}

int main()
{
    int Valor1, Valor2;
    cout << "Ingresar el primer valor: " <<endl;
    cin >> Valor1;
    cout << "Ingresar el segundo valor: " <<endl;
    cin >> Valor2;

    int suma = obtenerSuma(Valor1, Valor2);
    int resta = obtenerResta(Valor1, Valor2);
    int multiplicaion = obtenerMultiplicacion(Valor1, Valor2);
    int division = obtenerDivision(Valor1, Valor2);

    cout << "El resultado de la Suma es: "<< suma << endl;
    cout << "El resultado de la Resta es: "<< resta << endl;
    cout << "El resultado de la Multiplicacion es: " << multiplicaion << endl;
    cout << "El resultado de la division es: "<< division <<endl;
    return 0;
}
