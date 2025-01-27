#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
      // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char cidade[30]; 
    char pais[30];  // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    float populacao, area, expectativa; // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    int PIB;  // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o Nome da sua Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o País: \n");
    scanf("%s", &pais);

    printf("Digite a quantidade da população: \n");
    scanf("%f", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite a Expectativa de vida: \n");
    scanf("%f", &expectativa);

    printf("Digite o PIB: \n");
    scanf("%d", &PIB); 

    printf("Cidade: %s", cidade);
    printf("\nExpectativa de vida: %f - PIB: %d", expectativa, PIB);
    printf("\nPopulação: %f - Área: %f", populacao, area);
    printf("\nPaís: %s", pais);


    


    return 0;
}
