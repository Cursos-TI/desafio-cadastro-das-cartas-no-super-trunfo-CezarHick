#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo, populacao, pontos_turisticos;  
    float area, pib;                           
    char nome[50]; 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome da Cidade: \n");
    fgets(nome, sizeof(nome), stdin); // Usa fgets para ler a string com espaços

    
    printf("Digite o codigo da carta: \n");
    scanf("%d", &codigo);

    printf("Digite a populacao total da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Cidade: %s \nCodigo: %d \nPopulacao total: %d \nArea total: %fkm² \nPIB: R$ %f \nQuantidade de pontos turisticos: %d \n", 
           nome, codigo, populacao, area, pib, pontos_turisticos);
    
    
    return 0;
}
