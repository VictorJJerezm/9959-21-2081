#include <iostream>

using namespace std;

int main()
{
    char curso[50];
    int nota;

    cout<< "Ingrese el nombre curso asignado: "; cin >> curso;
    cout<< "Ingrese la nota obtenida: "; cin >> nota;

    if(nota <= 59){
        cout <<" --- Nota obtenida: "<<nota<<"; Reprobaste... Suerte para la proxima!  --- "<<endl;
    }
    else
    if(nota == 60){
        cout <<" --- Nota obtenida: "<<nota<<"; Reprobaste... Casi lo logras! --- "<<endl;
        }
    else
    if(nota == 61){
        cout<<" --- Nota obtenida: "<<nota<<"; Aprobaste! Casi no lo logras XD ---"<<endl;
    }
    else
    if(nota >= 62 && nota <= 74){
        cout<<" --- Nota obtenida: "<<nota<<"; Aprobaste! Hiciste un buen trabajo ---"<<endl;
    }
    else
    if(nota >= 75 && nota <=85){
        cout<<" --- Nota obtenida: "<<nota<<"; Aprobaste! Tus esfuerzos rindieron frutos ---"<<endl;
    }
    else
        cout<<" --- Nota obtenida: "<<nota<<"; Aprobaste! Hiciste un Excelente trabajo ---"<<endl;
    return 0;
}
