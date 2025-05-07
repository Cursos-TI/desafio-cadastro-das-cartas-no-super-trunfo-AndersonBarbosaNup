#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    // Declaraçã de variáveis
    char estado[1];
    char codigocarta[3];
    char cidadeN[50];
    int populacao;
    float area;
    float pib;
    int pturistico;
    float dpopulacional;
    float pibpercapita;

    char estado1[1];
    char codigocarta1[3];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pturistico1;
    float dpopulacional1;
    float pibpercapita1;

    //Entrada de dados para as cartas.

    printf("Entre com os dados da Carta 1: \n");
    
    printf("Digite a letra do Estado de A a H: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%s", &codigocarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidadeN);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em Km2: \n");
    scanf("%f", &area);

    printf("Digite o PIB bruto: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturistico);


    printf("Entre com os dados da Carta 2: \n");

    printf("Digite a letra do Estado de A a H: \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%s", &codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em Km2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB bruto: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturistico1);

    //Calculando Densidade e PIB.

    dpopulacional = (populacao / area);
    pibpercapita = (pib / populacao);

    dpopulacional1 = (populacao1 / area1);
    pibpercapita1 = (pib1 / populacao1);

    //Mostrando resultado das cartas.

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", cidadeN);
    printf("População: %d\n", populacao);
    printf("Área: %.2f, Km2\n", area);
    printf("PIB: %.2f, bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturistico);
    printf("Densidade Populacional: %.2f, hab/Km2\n", dpopulacional);
    printf("PIB per Capta: %.2f, reais\n", pibpercapita);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f, Km2\n", area1);
    printf("PIB: %.2f, bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pturistico1);
    printf("Densidade Populacional: %.2f, hab/Km2\n", dpopulacional1);
    printf("PIB per Capta: %.2f, reais\n", pibpercapita1);
    
    //Implementando decisões

    printf("Carta 1 -  %s: %.2f \n", cidadeN, area);
    printf("Carta 2 -  %s: %.2f \n", cidade1, area1);

    if( area > area1){
        printf("A cidade %s é a vencedora.\n", cidadeN);
    } else{
        printf("A cidade %s é a vencedora. \n", cidade1);
    }


    return 0;
}
