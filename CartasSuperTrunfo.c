#include <stdio.h>

int main(){
    /*CADASTRO DA CARTA 1 */

    char estado[30];
    char codigo_da_carta [15];
    char nome_da_cidade [30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos; 

    printf("Digite o Estado:\n");
    scanf("%s", &estado);

    printf("Digite o código da carta:\n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &nome_da_cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("São Paulo: %s\n", estado );
    printf("B3: %s\n", codigo_da_carta);
    printf("Francisco Morato: %s\n", nome_da_cidade);
    printf("165.139: %d\n", populacao);
    printf("49.164 km²: %f\n", area);
    printf(" 10.439,01: %f\n", pib);
    printf("12: %d\n", pontos_turisticos);

    /*CADASTRO DA CARTA 2 */
 

    char estado2[30];
    char codigo_da_carta2 [15];
    char nome_da_cidade2 [30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2; 

    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_da_carta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nome_da_cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Rio de Janeiro: %s\n", estado2 );
    printf("C4: %s\n", codigo_da_carta2);
    printf("Angra dos Reis: %s\n", nome_da_cidade2);
    printf("167.434: %d\n", populacao2);
    printf("813,420 km²: %f\n", area2);
    printf(" 11.194.244,23: %f\n", pib2);
    printf("25: %d\n", pontos_turisticos2);



    return 0;

}
