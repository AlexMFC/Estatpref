#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_pessoas, num_filho, salario_100;
    float salario,total_filho, total_sal, media_sal, media_filhos, maior_sal, perc_sal_100;

    total_filho = 0;
    total_sal = 0;
    salario_100 = 0;
    num_pessoas =0;


    for (num_pessoas = 0;;num_pessoas++)
    {
        printf ("Digite o salario: ");
        scanf ("%f", & salario);
        if (salario == 0 || salario <0)
            break;
        printf ("Digite a quantidade de filhos: ");
        scanf ("%d", & num_filho);

        if (maior_sal < salario)
                maior_sal = salario;
        if (salario <= 100)
                salario_100 ++;

        total_filho = total_filho + num_filho;
        total_sal = total_sal + salario;
    }

    if (num_pessoas)
        media_sal = total_sal/num_pessoas;
    if (num_pessoas)
        media_filhos = total_filho/num_pessoas;
    if (num_pessoas)
        perc_sal_100 = (salario_100/(float)num_pessoas)* 100;

    printf ("Media de salario: %.2f \n", media_sal);
    printf ("Media de filhos: %.2f \n", media_filhos);
    printf ("Maior salario: %.2f \n", maior_sal);
    printf ("Percentual de pessoas com salario ate 100 reais: %.2f \n", perc_sal_100);

    return 0;
}
