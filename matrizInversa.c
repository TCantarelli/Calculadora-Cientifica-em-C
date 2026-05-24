#include <stdio.h>
void matrizInversa()
{
   float m[3][3]; /* =
    {
        {0,-1,0},
        {0,0,1},
        {1,0,0}
    };*/
    printf("Digite a primeira linha:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%f", &m[i][j]);
        }
        printf("Digite a proxima linha\n");
    }
    float detm;
    //calcula o determinate da matriz original
    detm = ((+((m[1][1]*m[2][2]-(m[1][2]*m[2][1])))*(m[0][0])) -((m[1][0]*m[2][2])-(m[1][2]*m[2][0]))*(m[0][1]) +(((m[1][0]*m[2][1])-(m[1][1]*m[2][0]))*m[0][2]));
    if(detm ==0)
    {
        printf("matriz com determiante =0, portanto nao tem inversa!\n");
        return;
    }
    printf("\n o determinante de M eh %8.3f\n", detm);
    float inv[3][3];
    //1 linha da inversa
    inv[0][0] = (float)((m[1][1]*m[2][2])-(m[1][2]*m[2][1]))/detm;
    inv[0][1] = (float)((m[2][1]*m[0][2])-(m[2][2]*m[0][1]))/detm;
    inv[0][2] = (float)((m[0][1]*m[1][2])-(m[0][2]*m[1][1]))/detm;
    //2 linha da inversa
    inv[1][0] = (float)((m[1][2]*m[2][0])-(m[1][0]*m[2][2]))/detm;
    inv[1][1] = (float)((m[2][2]*m[0][0])-(m[2][0]*m[0][2]))/detm;
    inv[1][2] = (float)((m[0][2]*m[1][0])-(m[0][0]*m[1][2]))/detm;
    //3 linha da inversa
    inv[2][0] = (float)((m[1][0]*m[2][1])-(m[2][0]*m[1][1]))/detm;
    inv[2][1] = (float)((m[2][0]*m[0][1])-(m[2][1]*m[0][0]))/detm;
    inv[2][2] = (float)((m[0][0]*m[1][1])-(m[1][0]*m[0][1]))/detm;


    printf("\n a Inversa da matriz M eh:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        if (inv[i][j] > -0.00001 && inv[i][j] < 0.00001)
            {
                inv[i][j] = 0.0; // Força a ser zero positivo
            }
            printf("%8.3f ", inv[i][j]);
        }
        printf("\n");
    }
}
