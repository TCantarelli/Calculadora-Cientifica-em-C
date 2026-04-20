#include <stdio.h>
#include "raiz.h"
#include "expoente.h"
#include "pitagoras.h"
#include "grausParaRad.h"

int main ()
{
    int option = 1;
    while(option)
    {
        printf("Digite quais operações deseja fazer, 0 para sair:\n");
        printf("1-Operações basicas\n");
        printf("2-Trigonometria\n");
        scanf("%d", &option);

        if (option ==1)
        {
            printf("\n1-soma\n");
            printf("2-subtração\n");
            printf("3-Muliplicação\n");
            printf("4-Divisão\n");
            printf("5-Raiz quadrada\n");
            printf("6-potenciação\n");
            scanf("%d", &option);
            if(option == 1)
            {   double nr, soma =0;
                printf("\n Digite os valores a serem somados e digite -1 para sair");
                scanf("%lf", &nr);
                {
                    while(nr != -1)
                    {
                        soma +=nr;
                        scanf("%lf", &nr);
                    }
                    printf("a soma eh %lf", soma);
                }
            }
            if(option ==2)
            {
                double nr, subtracao;
                printf("Digite os valores para subtrair, digite -1 para sair:\n");
                scanf("%lf", &subtracao);
                while(1)
                {
                    scanf("%lf", &nr);
                    if(nr == -1)
                    {
                        break;
                    }
                    subtracao -=nr;
                }
                printf("a subtracao eh %lf\n", subtracao);
            }
            if(option ==3)
            {
                double nr, multiplicacao =1;
                printf("Digite os valores para multiplicar, digite -1 para sair:\n");
                scanf("%lf", &nr);
                while(nr != -1)
                {
                    multiplicacao *=nr;
                    scanf("%lf", &nr);
                }
                printf("A multipliacação é %lf", multiplicacao);

            }
            if(option == 4)
            {
                double nr,nr2, divisao =1;
                printf("Digite os valores para dividir, digite -1 para sair:\n");
                scanf("%lf %lf", &nr, &nr2);
                divisao = nr /nr2;
                nr = 1;
                while(nr != -1 && nr2 !=-1)
                {
                    divisao = divisao /nr;
                    scanf("%lf", &nr);
                }
                printf("A divisao eh %lf", divisao);
            }
            if(option == 5)
            {
                printf("Digite um valor inteiro para tirar a raiz:\n ");
                int nr;
                scanf("%d", &nr);
                printf("A raiz de %d eh %lf\n", nr, raizquadrada(nr));
            }
            if(option == 6)
            {
                printf("Digite o valor da base e do expoente, sendo os dois maior que 0:\n");
                int base, expoente;
                double resultado;
                scanf("%d %d", &base, &expoente);
                resultado = potencia(base, expoente);
                printf("O resultado eh %lf", resultado);
            }
        }
        if(option == 2)
        {
            printf("Digite qual operação deseja fazer:\n");
            printf("1-Pitagoras\n");
            printf("2-Conversao de angulos\n");
            scanf("%d", &option);

            if(option == 1)
            {
                pitagoras();
            }
            if(option == 2)
            {
                printf("1-graus para rad:\n");
                scanf("%d", &option);
                if(option == 1)
                {
                    grausParaRad();
                }

            }

        }
    }





    return 0;
}
