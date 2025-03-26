#include <stdio.h>

int main() {
    
    char Estado;
    char Codigo [10];
    char Cidade [20] = "Salvador";
    int População;
    float Área = 600.43;
    float PIB = 80000;
    int Turismo = 2;

printf("O nome do estado é: \n");
scanf("%s", &Estado);

printf("O código da carta é: \n");
scanf("%s", &Codigo);

printf("O nome da cidade é: \n");
scanf("%s", &Cidade);

printf("A população é: \n");
scanf("%d", &População);

printf("A Área é: \n");
scanf("%f", &Área);

printf("O PIB é: \n");
scanf("%d", &PIB);

printf("Quantidade de pontos turisticos: \n");
scanf("%d", &Turismo);


    
    return 0;
}
