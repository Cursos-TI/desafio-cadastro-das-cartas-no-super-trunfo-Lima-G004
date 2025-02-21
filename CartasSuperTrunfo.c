#include <stdio.h>

int main(){
    /*CADASTRO DA CARTA */

    char estado[30];
    char codigo_da_carta [15];
    char nome_da_cidade [30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos; 

    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("São Paulo: %s", estado );
    printf("B3: %s", codigo_da_carta);
    printf("Francisco Morato: %s", nome_da_cidade);
    printf("165.139: %d", populacao);
    printf("49.164 km²: %f", area);
    printf(" 10.439,01: %f", pib);
    printf("12: %d", pontos_turisticos);

    return 0;

}