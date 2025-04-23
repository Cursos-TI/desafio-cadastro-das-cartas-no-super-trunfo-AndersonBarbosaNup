#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// Declaraçã de variáveis

int main() {
    char estado[1];
    char codigocarta[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pturistico;

    char estado1[1];
    char codigocarta1[3];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pturistico1;

    //Entrada de dados para as cartas.

    printf("Entre com os dados da Carta 1: \n");
    
    printf("Digite a letra do Estado de A a H: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%s", &codigocarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

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

    //Mostrando resultado das cartas.

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturistico);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pturistico1);

        return 0;
}
