#include <stdio.h>
#include <math.h>
void pitagoras()
{
    printf("\Digite qual caso vc quer:\n");
    printf("1-Descobrir Hipotenusa\n");
    printf("2-Descobrir um dos catetos\n");
    int x;
    scanf("%d", &x);
    double a, b, c;
    if(x == 1)
    {
        printf("Digite o valor dos catetos:\n");
        scanf("%lf %lf", &a, &b);
        c = sqrt(a*a + b*b);
        printf("A hipotenusa mede %lf\n",c );
        return;
    }
    if(x == 2)
    {
        printf("Digite o valor da Hipotenusa depois o do cateto\n");
        scanf("%lf %lf", &c, &a);
        b = sqrt (c*c - a*a);
        printf("O valor do cateto eh %lf\n ", b);
        return ;
    }
}
