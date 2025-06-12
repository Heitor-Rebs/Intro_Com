#include <stdio.h>

int main() {
    /* Declarando variáveis */
    char estado[3], codigo[5], nome[51];
    char estado2[3], codigo2[5], nome2[51];
    int pturistico, pturistico2;
    unsigned long int populacao, populacao2;
    float area, pib, area2, pib2, densidade, pibcapita, densidade2, pibcapita2, poder, poder2;
    int comparacao, vencedor; /* Variáveis para os resultados das comparações */


    printf("Cadastro das cartas do Super Trunfo \n\n");

    /* Carta 1 */
    /* Utilizando printf e fgets para instruir e obter os valores do tipo char, repectivamente */
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
    scanf("%lu", &populacao);
    getchar(); /* Evitando que o fgets seguintes de pegar o enter antes de inserirmos seus valores */

    printf("Insira a área da cidade em quilômetros quadrados da cidade 1: \n");
    scanf("%f", &area);
    getchar();

    printf("Insira o PIB em bilhões da cidade 1: \n");
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
    scanf("%lu", &populacao2);
    getchar();

    printf("Insira a área da cidade em quilômetros quadrados da cidade 2: \n");
    scanf("%f", &area2);
    getchar();

    printf("Insira o PIB em bilhões da cidade 2: \n");
    scanf("%f", &pib2);
    getchar();

    printf("Insira o número de pontos turísticos da cidade 2: \n");
    scanf("%d", &pturistico2);
    getchar();

    /* Calculando Densidade Populacional e PIB per Capita */
    /* Carta 1 */
    densidade = populacao / area;
    pibcapita = (pib / populacao) * 1000000; /* Multiplicando por bilhão para obter valor em reais */

    /* Carta 2 */
    densidade2 = populacao2 / area2;
    pibcapita2 = (pib2 / populacao2) * 1000000;

    /* Calculando Super Poderes */
    poder = (float) populacao + (float) pturistico + area + pib + pibcapita + (1/densidade);
    poder2 = (float) populacao2 + (float) pturistico2 + area2 + pib2 + pibcapita2 + (1/densidade2);

    /* Mostrando os valores de cada carta */
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibcapita);
    printf("Super Poder: %f \n", poder);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);
    printf("Super Poder: %f \n", poder2);

    /* Comparando cartas e definindo vencedor */
    printf("\nComparação de Cartas:\n\n");
    comparacao = populacao > populacao2;
    vencedor = populacao < populacao2;
    vencedor++;
    printf("População: Carta %d venceu (%d)\n", vencedor, comparacao);
    comparacao = area > area2;
    vencedor = area < area2;
    vencedor++;
    printf("Área: Carta %d venceu (%d)\n", vencedor, comparacao);
    comparacao = pib > pib2;
    vencedor = pib < pib2;
    vencedor++;
    printf("PIB: Carta %d venceu (%d)\n", vencedor, comparacao);
    comparacao = pturistico > pturistico2;
    vencedor = pturistico < pturistico2;
    vencedor++;
    printf("Número de Pontos Turísticos: Carta %d venceu (%d)\n", vencedor, comparacao);
    comparacao = densidade < densidade2;
    vencedor = densidade > densidade2;
    vencedor++;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vencedor, comparacao);
    comparacao = pibcapita > pibcapita2;
    vencedor = pibcapita < pibcapita2;
    vencedor++;
    printf("PIB per Capita: Carta %d venceu (%d)\n", vencedor, comparacao);
    comparacao = poder > poder2;
    vencedor = poder < poder2;
    vencedor++;
    printf("Super Poder: Carta %d venceu (%d)\n", vencedor, comparacao);

    /* Determinando carta vencedora utilizando o critéiro de PIB per Capita com IF e Else */
    printf("Comparação de cartas (Atributo: PIB per Capita)\n\n");
    printf("Carta 1 - %s - %.2f reais\n", nome, pibcapita);
    printf("Carta 2 - %s - %.2f reais\n", nome2, pibcapita2);
    if (pibcapita > pibcapita2){
        printf("Carta 1 (%s) venceu",nome);
    } else if (pibcapita < pibcapita2){
        printf("Carta 2 (%s) venceu",nome2);
    } else {
        printf("As cartas empataram");
    }

    return 0;
}
