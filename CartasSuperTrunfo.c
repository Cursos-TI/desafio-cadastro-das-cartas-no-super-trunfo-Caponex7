#include <stdio.h>

int main() {
    // Definindo as variáveis para armazenar as informações da cidade
    int codigo, populacao, pontosTuristicos;
    float area, pib;
    char nome[100];


    // Começo do cadastro
    printf("Bem-vindo ao cadastro de cidades!\n");
    printf("Vamos começar a inserir as informações.\n");


    // Captura do código da cidade
    printf("Qual o código da cidade? ");
    scanf("%d", &codigo);


    // Captura do nome da cidade
    printf("Agora, me diga o nome da cidade: ");
    scanf(" %[^\n]%*c", nome);  // O espaço antes de %[^\n] é para permitir a leitura de nomes com espaços


    // Captura da população da cidade
    printf("Quantas pessoas vivem na cidade? (População): ");
    scanf("%d", &populacao);


    // Captura da área da cidade (em km²)
    printf("Qual a área da cidade? (em km²): ");
    scanf("%f", &area);


    // Captura do PIB da cidade (em bilhões)
    printf("Quanto é o PIB da cidade? (em bilhões de R$): ");
    scanf("%f", &pib);


    // Captura do número de pontos turísticos
    printf("Quantos pontos turísticos a cidade tem? ");
    scanf("%d", &pontosTuristicos);


    // Exibindo todos os dados cadastrados
    printf("\n=== Informações da Cidade ===\n");
    printf("Código da cidade: %d\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);


    printf("\nObrigado por cadastrar a cidade! :)");


    return 0;


}
