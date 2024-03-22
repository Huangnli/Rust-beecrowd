#include <stdio.h>
#include <math.h>

void ordenacaoDecrescente(float *abc)
{
    int i, aux, troca;

    troca = 1;
    while (troca == 1)
    {
        troca = 0;
        for (i = 0; i < 3; i++)
        {
            if (abc[i] < abc[i + 1])
            {
                troca = 1;
                aux = abc[i];
                abc[i] = abc[i + 1];
                abc[i + 1] = aux;
            }
        }
    }
}

int main()
{

    float abc[3];

    scanf("%f %f %f", &abc[0], &abc[1], &abc[2]);

    ordenacaoDecrescente(abc);

    if (abc[0] >= (abc[1] + abc[2]))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {

        if (pow(abc[0], 2) == (pow(abc[1], 2) + pow(abc[2], 2)))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if (pow(abc[0], 2) > (pow(abc[1], 2) + pow(abc[2], 2)))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (pow(abc[0], 2) < (pow(abc[1], 2) + pow(abc[2], 2)))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (abc[0] == abc[1] && abc[1] == abc[2])
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (abc[0] == abc[1] || abc[1] == abc[2])
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}