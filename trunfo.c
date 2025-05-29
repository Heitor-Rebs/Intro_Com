#include <stdio.h>
 
int main() {
    char estado, codigo, nome, estado2, codigo2, nome2;
    int populacao, pturistico,populacao2, pturistico2;
    float area, pib, area2, pib2;

    printf("Insira a letra que representa o estado da cidade 1 (A a H):\n");
    scanf("%c", &estado);
    printf("Insira o codigo da cidade 1 (Ex. B03):\n");
    scanf("%c", &codigo);
    printf("Insira o nome da cidade 1:\n");
    scanf("%c", &nome);
    printf("Insira a população da cidade 1:\n");
    scanf("%d", &populacao);
    printf("Insira a área da cidade em quilômetros quadrados da cidade 1:\n");
    scanf("%f", &area);
    printf("Insira o PIB cidade 1:\n");
    scanf("%f", &pib);
    printf("Insira o número de pontos turísticos da cidade 1:\n");
    scanf("%d", &pturistico);

    printf("Insira a letra que representa o estado da cidade 2 (A a H):\n");
    scanf("%c", &estado2);
    printf("Insira o código da cidade 2 (Ex. B03):\n");
    scanf("%c", &codigo2);
    printf("Insira o nome da cidade 2:\n");
    scanf("%c", &nome2);
    printf("Insira a população da cidade 2:\n");
    scanf("%d", &populacao2);
    printf("Insira a área da cidade em quilômetros quadrados da cidade 2:\n");
    scanf("%f", &area2);
    printf("Insira o PIB cidade 2:\n");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da cidade 2:\n");
    scanf("%d", &pturistico2);
}
