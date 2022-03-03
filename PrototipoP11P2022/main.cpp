#include <stdio.h>
//Se define N como una constante
#define N 3
int main()
{
// m1 y m2 van a ser matrices de 3x3
int m1[N][N] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
int m2[N][N];
int x, y;
    //Ciclos for para calcular los valors de x & y
    for(x=0; x < N; x++)
    for(y=0; y < N; y++)
        // Si m1 en la posición x & y tiene como producto 2 va a ser igual a 0
        if (m1[x][y]%2 == 0)
        {
            // si esto se cumple m2 va a ser igual a cero
            m2[x][y] = 0;
        }
        else
        {
            //Si esto no se cumple va a ser igual a 1
            m2[x][y] = 1;
        }
//Al imprimir las 3 posiciones aquellas que terminen en 2 van a ser iguales a 0
printf("%d , %d , %d", m2[0][0], m2[1][1], m2[2][2]);
}
