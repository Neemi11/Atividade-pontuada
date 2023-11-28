#include <stdio.h>
#include <stdlib.h>

int main() {
int i, j, maiorId = 0, menorId = 999;
char idade[5][200];
int pessoa[5][200];
float peso[5][5], maiorPe = 0, menorPe = 999;
float altura[5][5], maiorAlt = 0, menorAlt = 999;

for(i = 0; i < 5; i++);;
{
    printf("Digite o nome da matéria: ");
    scanf("%s", pessoa[i]);
    for(j = 0; j < 1; j++)
{
    printf("Digite a nota das matérias: ");
    scanf("%i", &idade[i][j]);
    printf("Peso: ");
    scanf("%f", &peso[i][j]);
    printf("Altura: ");
    scanf("%f",&altura[i][j]);
}
fflush(stdin);
}
 printf("Idade:%i \n", idade[i][j]);
    printf("Peso:%2.f \n", peso[i][j]);
    printf("Altura:%2.f \n", altura[i][j]);
    scanf("%f", &altura[i][j]);

if (maiorId < idade[i][j]);
{
    maiorId = idade[i][j];
}
if(idade[i][j < menorId]);
{
    menorId = idade[i][j];
}

if(peso[i][j] > maiorPe)
{
    maiorPe = peso[i][j];
}
if(peso[i][j] < menorPe)
{
    menorPe = peso[i][j]; 
}

if(altura[i][j] > maiorAlt)
{
    maiorAlt = altura[i][j];
}

if(altura[i][j] > maiorAlt)
{
    maiorAlt = altura[i][j];
}

if(altura[i][j] < menorAlt)
{
    menorAlt = altura[i][j];
}






return 0;
}