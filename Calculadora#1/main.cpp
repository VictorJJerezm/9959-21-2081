#include <iostream>
using namespace std;

int main()
{

    int x, y;
    int suma, resta, multiplicacion, division;
    float porcentaje1;

    cout << "Ingresar el primer operador: " <<endl;
    cin >> x;
    cout << "Ingresar el segundo operador: " <<endl;
    cin >> y;

    suma = x + y;
    resta = x - y;
    multiplicacion = x * y;
    division = x / y;
    porcentaje1 = x - x*0.0483;

    cout << "Resultados: " << endl;
    cout << "Resultado de suma: " << suma << endl;
    cout << "Resultado de resta: " << resta << endl;
    cout << "Resultado de multiplicacion: " << multiplicacion << endl;
    cout << "Resultado de division: " << division << endl;
    cout << "Resultado porcentaje de x"<< porcentaje1 <<endl;



    system ("pause");
    return 0;
}
