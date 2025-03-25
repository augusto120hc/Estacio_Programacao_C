
#include<stdio.h>

int main() {
    //Cidade 01 e Cidade02
    char estadoC1, estadoC2;
    char codigoC1[10], codigoC2[10];
    char cidade01[20], cidade02[20];
    int populacaoC1, populacaoC2;
    float areaC1, areaC2;
    float pibC1, pibC2;
    int pontosTuristicosC1, pontosTuristicosC2;


    //Cidade 01
    printf("Insira dados da carta 01 \n ");
    printf("Digite a letra de um Estado A a Z: \n");
    scanf(" %c", &estadoC1);

    printf("Digite o codigo da carta: \n");
    scanf(" %s", codigoC1);

    printf("Digite o nome do Estado: \n");
    scanf(" %s", cidade01);

    printf("Qual a população: \n");
    scanf("%d", &populacaoC1);

    printf("Qual a área: \n");
    scanf("%f", &areaC1);

    printf("Qual o PIB: \n");
    scanf("%f", &pibC1);

    printf("Quantos pontos turísticos: \n");
    scanf(" %d", &pontosTuristicosC1);

    //Cidade 02
    printf("Insira dados da carta 02 \n");
    printf("Digite a letra de um Estado A a Z: \n");
    scanf(" %c", &estadoC2);

    printf("Digite o codigo da carta: \n");
    scanf(" %s", codigoC2);

    printf("Digite o nome do Estado: \n");
    scanf(" %s", cidade02);

    printf("Qual a população: \n");
    scanf("%d", &populacaoC2);

    printf("Qual a área: \n");
    scanf("%f", &areaC2);

    printf("Qual o PIB: \n");
    scanf("%f", &pibC2);

    printf("Quantos pontos turísticos: \n \n");
    scanf(" %d", &pontosTuristicosC2);

    //Carta 01
    printf("\n CARTA 01 \n");
    printf("A letra do Estado é %c \n", estadoC1);
    printf("O código da carta é: %s \n", codigoC1);
    printf("O nome da cidade:  %s \n", cidade01);
    printf("A população é: %d \n", populacaoC1);
    printf("A áre é: %.2f \n", areaC1);
    printf("O PIB é: %.2f \n", pibC1);
    printf("Quantidade de pontos turisticos é: %d \n", pontosTuristicosC1);

    // Carta 02
    printf(" \n CARTA 02 \n");
    printf("A letra do Estado é %c \n", estadoC2);
    printf("O código da carta é: %s \n", codigoC2);
    printf("O nome da cidade:  %s \n", cidade02);
    printf("A população é: %d \n", populacaoC2);
    printf("A áre é: %.2f \n", areaC2);
    printf("O PIB é: %.2f \n", pibC2);
    printf("Quantidade de pontos turisticos é: %d \n", pontosTuristicosC2);
    return 0;




}