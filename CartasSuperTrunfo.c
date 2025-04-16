#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado[1];
    int codigocarta;
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pturistico;

    char estado1[1];
    int codigocarta1;
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pturistico1;

    printf("Entre com os dados da Carta 1: \n");
    
    printf("Digite a letra do Estado de A a H: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%d", &codigocarta);

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
    scanf("%d", &codigocarta1);

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

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s%d\n", estado, codigocarta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturistico);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%d\n", estado1, codigocarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pturistico1);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
