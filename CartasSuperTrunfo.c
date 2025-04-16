#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado[1];
    char codigocarta[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pturistico;

    printf("Carta 1: \n");
    
    printf("Digite a letra do Estado de A a H: \n");
    scanf("%f", &estado);

    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%s", estado, &codigocarta);

    printf("Digite o nome da cidade: \n");
    scanf("%d", &cidade);

    printf("Digite a população: \n");
    scanf("%f", &populacao);

    printf("Digite a área em Km2: \n");
    scanf("%s", &area);

    printf("Digite o PIB bruto: \n");
    scanf("%d", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturistico);



    printf("Nome do Aluno: %s - Matrícula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %f\n", idade, altura);
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
