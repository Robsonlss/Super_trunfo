#include <stdio.h>

int main() {
    char estado1, estado2;//estados
    char codigodacarta1[20], codigodacarta2[20];//codigo
    char nomedacidade1[50], nomedacidade2[50];// nome das cidades a serem cadastradas
    int populacao1, populacao2;//numero de habitantes
    float area1, area2;// area das cidades
    float pib1, pib2;// pib das cidades
    int pontosturisticos1, pontosturisticos2;// numero de pontos turisticos

    printf("Digite os dados da primeira carta\n\n");
    printf("Digite o estado:\n");
    scanf(" %c", &estado1); 
    printf("Digite o código da carta:\n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    printf("Primeira carta:\n"); // informacoes da primeira carta ja cadastrada
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n\n", pontosturisticos1);



    printf("Digite os dados da segunda carta\n\n");

    printf("Digite o estado:\n");
    scanf(" %c", &estado2); 
    
    printf("Digite o código da carta:\n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);



    printf("Segunda carta:\n");//informacoes da segunda carta ja cadastrada
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

    return 0;
}
