#include <iostream>

using namespace std;

int main()
{
   double A, B, C;

   cout << "Ingrese el valor del primer lado: "<< endl;
   cin >> A;
   cout << "Ingrese el valor del segundo lado: "<< endl;
   cin >> B;
   cout << "Ingrese el valor del tercer lado: "<< endl;
   cin >> C;

   if ( ((A+B)>C) && ((A+C)>B) && ((B+C)>A) )
   {
       cout << "Felicidades, los datos ingresados si pueden representar un triangulo" << endl;
   }
   else
   {
       cout << "Ups! Los datos que ingresaste no representan un triangulo" << endl;
       cout << "Por que? Pues porque la suma de dos de los lados no fue mayor al tercero..." << endl;
   }

    return 0;
}
