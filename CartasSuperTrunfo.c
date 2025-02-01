#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_Carta 10 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

typedef struct {
  int populacao;
  int area;
  int pib;
  int numero_de_pontos_turisticos;
} Carta;

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char nomes[][20] = {
        "Cecilia",
        "Madison",
        "Henderson",
        "Cando",
        "Shannon County",
        "Sloan",
        "Grace",
        "Middlesex County",
        "East Newnan",
        "Rogue River"
    };
    printf("====================\n");
    printf("SUPER TRUNFO\n");
    printf("===================\n");
    
    printf("Digite o nome da cidade: ");
    char nome[20];
    scanf("%s", &nome);
    printf("Digite a populacao da cidade: ");
    int populacao;
    scanf("%d", &populacao);
    printf("Digite a area da cidade: ");
    int area;
    scanf("%d", &area);
    printf("Digite o pib da cidade: ");
    int pib;
    scanf("%d", &pib);
    printf("Digite o numero de pontos turisticos da cidade: ");
    int numero_de_pontos_turisticos;
    scanf("%d", &numero_de_pontos_turisticos);
    Carta Carta_00 = {populacao, area, pib, numero_de_pontos_turisticos};
    
    print(Carta_00);
    
    return 0;
}
