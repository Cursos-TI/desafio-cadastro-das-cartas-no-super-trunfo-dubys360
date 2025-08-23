#include <stdio.h>

int main() {
// Carta 1
    char Estado1[30];
    char CodigoCarta1[10];
    int Populacao1;
    int Numerodepontosturisticos1;
    float Area1;
    float PIB1;

 // Carta 2
    char Estado2[30];
    char CodigoCarta2[10];
    int Populacao2;
    int Numerodepontosturisticos2;
    float Area2;
    float PIB2;


//Cadastro Carta 1
    printf("Digite o nome do Estado 1:\n");
    scanf("%s", Estado1);

    printf("Digite o Código da Carta 1:\n");
    scanf(" %s", CodigoCarta1);

    printf("Digite a população:\n");
    scanf("%d", &Populacao1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &Numerodepontosturisticos1);

    printf("Digite a Área:\n");
    scanf("%f", &Area1);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);

// Cadastro da carta 2
    printf("\nDigite o nome do Estado 2:\n");
    scanf("%S", Estado2);

    printf("Digite o Código da Carta 2:\n");
    scanf(" %s", CodigoCarta2);

    printf("Digite a população:\n");
    scanf("%d", &Populacao2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &Numerodepontosturisticos2);

    printf("Digite a Área:\n");
    scanf("%f", &Area2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

//Exibição dos Dados das Cartas

    printf("Dados das Cartas\n");

    printf("Carta 1: Estado: %s\n Código da Carta 1: %s\n População: %d\n Pontos Turísticos: %d\n Área: %.2f\n PIB: %.2f\n",
           Estado1, CodigoCarta1, Populacao1, Numerodepontosturisticos1, Area1, PIB1);

    printf("Carta 2: Estado: %s Código da Carta 2: %s\n População: %d\n Pontos Turísticos: %d Área: %.2f\n PIB: %.2f",
    Estado2, CodigoCarta2, Populacao2, Numerodepontosturisticos2, Area2, PIB2);


    return 0;
}
