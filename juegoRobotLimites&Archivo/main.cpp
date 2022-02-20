#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void SaveFile(string Nombre, char GameMap[10][10])
{
    ofstream FileMap("Mapa1.txt");
    if(FileMap.is_open())
    {
        FileMap << Nombre << endl;
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
               FileMap << GameMap[i][j];
            }
            FileMap << endl;
        }
    }

    FileMap.close();
}
void DrawMap(int HeroPosX, int HeroPosY, char GameMap[10][10])
{
    GameMap[HeroPosX][HeroPosY] = 'R';
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if (GameMap[i][j] == 'R' )
            {

                if ( i != HeroPosX || j != HeroPosY )
                {
                    GameMap[i][j] = ' ';
                }

            }
            cout << GameMap[i][j];
        }
        cout << endl;
    }
}
int PosicionRobot(char eje, char GameMap[10][10])
{
    int posicion=0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(GameMap[i][j] == 'R' && eje == 'x')
            {
                posicion = i;
            }
            else
            if(GameMap[i][j] == 'R' && eje == 'y')
            {
                posicion = j;
            }
        }
    }
    return posicion;
}
string OpenFile(char GameMap[10][10])
{
    ifstream FileMap("Mapa1.txt");
    string line;
    string name="Victor_Jerez";
    int renglon = 0;
    int row = 0;

    if(FileMap.is_open())
    {
        while(getline(FileMap, line))
        {
            if(renglon == 0)
                name = line;
            else
            {
                for(int i = 0; i < 10; i++)
                {
                        GameMap[row][i] = line[i];
                }
                row++;
            }
            renglon++;
        }

        FileMap.close();
    }
    else
    {
        cout << "Error. No se pudo abrir el archivo." << endl;
    }
    return name;
}

int main()
{
    int HeroPosX=0;
    int HeroPosY=0;
    bool isGameOver = false;
    char Input = ' ';
    char GameMap[10][10];
    string NamePlayer = "";
    NamePlayer = OpenFile(GameMap);
    cout << "Bienvenido/a " << NamePlayer << endl;
    HeroPosX = PosicionRobot('x', GameMap);
    HeroPosY = PosicionRobot('y', GameMap);
    DrawMap(HeroPosX, HeroPosY, GameMap);

    while(isGameOver == false)
    {
        cout << "Controles Teclas --> w(arriba), a(izquierda), d(derecha) y s(abajo)" << endl;
        cout << "Controles Teclas --> p(Salida)" << endl;
        cin >> Input;

        switch (Input)
        {
            case 'd':
                if(HeroPosY < 8)
                    HeroPosY++;
                break;
            case 'a':
                if(HeroPosY > 1)
                    HeroPosY--;
                break;
            case 'w':
                if(HeroPosX > 1)
                    HeroPosX--;
                break;
            case 's':
                if(HeroPosX < 8)
                    HeroPosX++;
                break;
            case 'p':
                isGameOver = true;
                break;
            default:
                cout << "Tecla Invalida" << endl;
                break;
        }
        DrawMap(HeroPosX, HeroPosY, GameMap);
    }
    SaveFile(NamePlayer, GameMap);

    return 0;
}
