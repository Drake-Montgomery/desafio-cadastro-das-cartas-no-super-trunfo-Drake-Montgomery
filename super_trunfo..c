#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
/*
Cartas de refenrencia 
  Carta 1:
  Estado: A
  Código: A01
  Nome da Cidade: São Paulo
  População: 12325000
  Área: 1521.11 km²
  PIB: 699.28 bilhões de reais
  Número de Pontos Turísticos: 50

  Carta 2:
  Estado: B
  Código: B02
  Nome da Cidade: Rio de Janeiro
  População: 6748000
  Área: 1200.25 km²
  PIB: 300.50 bilhões de reais
  Número de Pontos Turísticos: 30    
*/
//Super Trunfo em c: Fundamentos e Técnicas Avançadas
int main() {
    // var primeira carta
    char C1_Estado;
    char C1_CodCarta[20];
    char C1_cidade[20];
    int C1_populacao;
    float C1_area;
    float C1_pib;
    int C1_numero_de_pontos_turisticos;

    // var segunda carta
    char C2_Estado;
    char C2_CodCarta[20];
    char C2_cidade[20];
    int C2_populacao;
    float C2_area;
    float C2_pib;
    int C2_numero_de_pontos_turisticos;
    
    printf("====================\n");
    printf("SUPER TRUNFO\n");
    printf("===================\n");
    printf("Vamos jogar!\n");

    // Entrada de dados da 1ª carta
    printf("====================\n");
    printf("Vamos entrar com os dados da 1ª carta\n");
    printf("Digite uma letra para representar o estado[A, B, C, D, E, F, G, H]:\n");
    scanf("%c", & C1_Estado);
    limpar_buffer();
    printf("Escolha um numero para o codigo da carta, uma letra do estado seguida de um nuemro [A01, B09, C03]:\n");
    scanf("%s", C1_CodCarta);
    limpar_buffer();
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]%*c", C1_cidade); //funciona so precisa do espaco
    limpar_buffer();
    printf("Digite a populacao da cidade:\n");
    scanf("%d", &C1_populacao);
    limpar_buffer();
    printf("Digite a area da cidade: \n");
    scanf("%f", &C1_area); // Use %f para float
    limpar_buffer();
    printf("Digite o pib da cidade: \n");
    scanf("%f", &C1_pib); // Use %f para float
    limpar_buffer();
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &C1_numero_de_pontos_turisticos);
    limpar_buffer();
    printf("=======================================================\n");

    // Eximindo os dados da 1ª carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", C1_Estado);
    printf("Codigo da carta: %s\n", C1_CodCarta);
    printf("Nome da cidade: %s\n", C1_cidade);
    printf("Populacao: %d\n", C1_populacao);
    printf("Area: %.2f km²\n", C1_area);
    printf("PIB: %.2f bilhões de reais\n", C1_pib);
    printf("Numero de pontos turisticos: %d\n", C1_numero_de_pontos_turisticos);
    printf("=======================================================\n");
    
    // Entrada de dados da 2ª carta
    printf("Vamos entrar com os dados da 2ª carta\n");
    printf("Digite uma letra para representar o estado[A, B, C, D, E, F, G, H]:\n");
    scanf("%s", C2_Estado);
    limpar_buffer();
    printf("Escolha um numero para o codigo da carta, uma letra do estado seguida de um nuemro [A01, B09, C03]:\n");
    scanf("%s", C2_CodCarta);
    limpar_buffer();
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]%*c", C2_cidade);
    limpar_buffer();
    printf("Digite a populacao da cidade:\n");
    scanf("%d", &C2_populacao);
    limpar_buffer();
    printf("Digite a area da cidade:\n");
    scanf("%f", &C2_area); // Use %f para float
    limpar_buffer();
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &C2_pib); // Use %f para float
    limpar_buffer();
    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &C2_numero_de_pontos_turisticos);
    limpar_buffer();

    // Eximindo os dados da 2ª carta
    printf("===================================\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", C2_Estado);
    printf("Codigo da carta: %s\n", C2_CodCarta);
    printf("Nome da cidade: %s\n", C2_cidade);
    printf("Populacao: %d\n", C2_populacao);
    printf("Area: %.2f\n km²", C2_area);
    printf("PIB: R$%.2f bilhões de reais\n", C2_pib);
    printf("Numero de pontos turisticos: %d\n", C2_numero_de_pontos_turisticos);
    printf("===================================\n");
    printf("Fim do jogo\n");
    return 0;
}