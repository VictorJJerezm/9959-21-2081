#include <iostream>
using namespace std;

int main()
{

    int x, y;
    int suma, resta, multiplicacion, division;

    cout << "Ingresar el primer operador: " <<endl;
    cin >> x;
    cout << "Ingresar el segundo operador: " <<endl;
    cin >> y;

    suma = x + y;
    resta = x - y;
    multiplicacion = x * y;
    division = x / y;

    cout << "Resultados: " << endl;
    cout << "Resultado de suma: " << suma << endl;
    cout << "Resultado de resta: " << resta << endl;
    cout << "Resultado de multiplicacion: " << multiplicacion << endl;
    cout << "Resultado de division: " << division << endl;



    system ("pause");
    return 0;
}
