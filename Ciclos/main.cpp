#include <iostream>

using namespace std;

int main()
{
/*
//contador De 1 a 100.
    int Counter = 0;
    while(Counter < 100)
    {
        Counter = Counter + 1;
        cout << Counter << endl;
    }
*/
/*
//Ciclo para saber si aun soy feliz.
    bool isHappy = true;
    char input = ' ';
    while(isHappy == true)
    {
        cout << ":D" << endl;
        cout << "Aun eres feliz? (T/F)";
        cin >> input;
        if(input == 'F')
            isHappy = false;
        if(input == 'f')
            isHappy = false;
    }
*/

/*
//Ciclo que sin importar que se ingrese se cierra.
    bool isHappy = false;
    char input  = ' ';
    do
    {
        cout << ":D" << endl;
        cout << "Sigues feliz? (T/F)";
        cin >> input;
        if(input == 'F')
            isHappy = false;
    } while(isHappy == true);
*/
/*
//Ciclo que muestra los numeros pares e impares entre determinados numeros.
      for(int i = 0; i < 10 ; i++)
    {
        cout << i << " ";
        if( i % 2 == 0)
        {
            cout << ":D numero par" << endl;
        }else
        {
             cout << "D: numero impar" << endl;
        }
    }
*/

//Ciclo que nos muestra los numeros ingresados en el codigo.
    float Grades[6] = { 3.14f, 7.12f, 10.0f, 0.98f, -1.34f, 8};

    for(int j = 0; j < 6 ; j++)
    {
        cout << Grades[j] << endl;
    }

    return 0;
}
