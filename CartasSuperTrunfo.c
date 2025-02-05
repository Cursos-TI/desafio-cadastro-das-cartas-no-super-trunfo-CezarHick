#include <stdio.h>
#include <string.h> // Adicionado para o tratamento correto de strings

int main() {
    int codigo, populacao, pontos_turisticos, codigo2, populacao2, pontos_turisticos2; //Definicao de variaveis 
    float area, pib, area2, pib2;                      
    char nome[50], nome2[50];
    
    //Solicitacao dos dados da primeira cidade
    printf("Digite o nome da Cidade: \n");
    fgets(nome, sizeof(nome), stdin); // Usa fgets para ler a string com espaços
    nome[strcspn(nome, "\n")] = 0; // Remove o \n deixado pelo fgets

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

    // Calculos para densidade e renda per capita
    float densi_pop = populacao / area;
    float PIB_percapita = pib / (float) populacao;


    // Exibição dos Dados das Cartas:
    printf("\n**** DADOS DA PRIMEIRA CARTA ****\n");
    printf("Cidade: %s \nCodigo: %d \nPopulacao total: %d \nArea total: %.2fkm² \nPIB: R$ %.2f \nQuantidade de pontos turisticos: %d \nDensidade Populacional: %.2f habitantes/km² \nPIB per Capita: %.2f reais por pessoa \n"
            , nome, codigo, populacao, area, pib, pontos_turisticos, densi_pop, PIB_percapita);
    
    getchar(); // Consumir a quebra de linha deixada pelo scanf
    
    //Solicitacao dos dados da segunda cidade
    printf("\n");
    printf("Digite o nome da segunda cidade: \n");
    fgets(nome2, sizeof(nome2), stdin); // Usa fgets para ler a string com espaços
    nome2[strcspn(nome2, "\n")] = 0; // Remove o \n deixado pelo fgets

    printf("Digite o codigo da segunda carta: \n");
    scanf("%d", &codigo2);

    printf("Digite a populacao total da segunda cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area total da segunda cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da segunda cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontos_turisticos2);

   
    float densi_pop2 = populacao2 / area2;
    float PIB_percapita2 = pib2 / (float) populacao2;
    
    
    printf("\n**** DADOS DA SEGUNDA CARTA ****\n");
    printf("Cidade: %s \nCodigo: %d \nPopulacao total: %d \nArea total: %.2fkm² \nPIB: R$ %.2f \nQuantidade de pontos turisticos: %d \nDensidade Populacional: %.2f habitantes/km² \nPIB per Capita: %.2f reais por pessoa \n"
            , nome2, codigo2, populacao2, area2, pib2, pontos_turisticos2, densi_pop2, PIB_percapita2);


    // Comparação das cidades
printf("\n**** COMPARATIVO ENTRE AS CIDADES ****\n");

// Comparação da densidade populacional (vence a menor)
if (densi_pop < densi_pop2) {
    printf("A cidade %s tem uma menor densidade populacional (%.2f habitantes/km²) do que %s (%.2f habitantes/km²), portanto vence %s!!!\n",
           nome, densi_pop, nome2, densi_pop2, nome);
} else if (densi_pop > densi_pop2) {
    printf("A cidade %s tem uma menor densidade populacional (%.2f habitantes/km²) do que %s (%.2f habitantes/km²), portanto vence %s!!!\n",
           nome2, densi_pop2, nome, densi_pop, nome2);
} else {
    printf("As cidades %s e %s possuem a mesma densidade populacional de %.2f habitantes/km², tornando empate!\n",
           nome, nome2, densi_pop);
}

// Comparação do PIB per capita (vence o maior)
if (PIB_percapita > PIB_percapita2) {
    printf("A cidade %s possui maior renda per capita (R$ %.2f) do que %s (R$ %.2f), portanto vence %s!!!\n",
            nome, PIB_percapita, nome2, PIB_percapita2, nome);
} else if (PIB_percapita < PIB_percapita2) {
    printf("A cidade %s possui maior renda per capita (R$ %.2f) do que %s (R$ %.2f), portanto vence %s!!!\n",
            nome2, PIB_percapita2, nome, PIB_percapita, nome2);
} else {
    printf("As cidades %s e %s possuem renda per capita igual (R$ %.2f), tornando empate!\n",
            nome, nome2, PIB_percapita);
}
    return 0;
}