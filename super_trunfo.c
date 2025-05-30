#include <stdio.h>

int main() {
    /* Declarando variáveis */
    char estado[3], codigo[5], nome[51];
    char estado2[3], codigo2[5], nome2[51];
    int populacao, pturistico, populacao2, pturistico2;
    float area, pib, area2, pib2;
    
    
    /* Carta 1 
    Utilizando printf e fgets para instruir e obter os valores do tipo char, repectivamente */
    printf("Insira a letra que representa o estado da cidade 1 (A a H): \n");
    fgets(estado, 3, stdin);
    estado[strcspn(estado, "\n")] = '\0'; /* Retirando o espaço que o fgets pode incluir no texto */

    printf("Insira o código da cidade 1 (Ex. B03): \n");
    fgets(codigo, 5, stdin);
    codigo[strcspn(codigo, "\n")] = '\0';

    printf("Insira o nome da cidade 1: \n");
    fgets(nome, 51, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    /* Utilizando o scanf para obter os valores dos tipo int e float */
    printf("Insira a população da cidade 1: \n");
    scanf("%d", &populacao);
    getchar(); /* Evitando do fgets seguintes de pegar o enter antes de inserirmos seus valores */

    printf("Insira a área da cidade em quilômetros quadrados da cidade 1: \n");
    scanf("%f", &area);
    getchar();

    printf("Insira o PIB da cidade 1: \n");
    scanf("%f", &pib);
    getchar();

    printf("Insira o número de pontos turísticos da cidade 1: \n");
    scanf("%d", &pturistico);
    getchar();

    /* Carta 2 */
    printf("\nInsira a letra que representa o estado da cidade 2 (A a H): \n");
    fgets(estado2, 3, stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Insira o código da cidade 2 (Ex. B03): \n");
    fgets(codigo2, 5, stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Insira o nome da cidade 2: \n");
    fgets(nome2, 51, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Insira a população da cidade 2: \n");
    scanf("%d", &populacao2);
    getchar();

    printf("Insira a área da cidade em quilômetros quadrados da cidade 2: \n");
    scanf("%f", &area2);
    getchar();

    printf("Insira o PIB da cidade 2: \n");
    scanf("%f", &pib2);
    getchar();

    printf("Insira o número de pontos turísticos da cidade 2: \n");
    scanf("%d", &pturistico2);
    getchar();
    
    /* Mostrando os valores de cada carta */
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturistico);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturistico2);


    return 0;
}
