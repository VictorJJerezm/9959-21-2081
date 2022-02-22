#include <iostream>

using namespace std;

int main()
{
    int Edad = 0;
    cout << "Ingresa cual es tu edad: ";
    cin >> Edad;
    cout << "Estas chiquito, apenas tienes: " << Edad << endl;
    int base,altura;
    cout << endl << "Ingresa la base de tu rectangulo: " << endl;
    cin >> base;
    cout << "Ingresa la altura de tu rectangulo" << endl;
    cin >> altura;
    cout << "El area de tu rectangulo es: " << base * altura << endl;
    char letraFavorita;
    cout << endl << "Cual es tu letra favorita?" << endl;
    cin >> letraFavorita;
    cout << "Que casualidad! La mia tambien es la letra "<<letraFavorita<<". " << endl;
    return 0;
}
