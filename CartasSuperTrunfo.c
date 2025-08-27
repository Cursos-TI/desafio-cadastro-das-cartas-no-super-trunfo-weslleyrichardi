#include <stdio.h>

float densidadePopulacional(float populacao, float area) {
    float resultado = populacao / area;
    return resultado;
}

float pibPerCapita(float pib, float populacao) {
    float resultado = pib / populacao;
    return resultado;
}


int main(){

    // Dados separados por tipos
    char estado_1[1], estado_2[1];
    char cod_1[4], cod_2[4];
    char nome_cidade_1[30];
    char nome_cidade_2[30];

    int populacao_1, qtd_pts_turisticos_1;
    int populacao_2, qtd_pts_turisticos_2;

    float area_1, PIB_1;
    float area_2, PIB_2;

    // ------------CARTA 1------------

    printf("\n\nCOLETA DE DADOS DA CARTA 1\n\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado_1);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome_cidade_1);

    printf("Digite a população: ");
    scanf("%d", &populacao_1);
    
    printf("Digite a área: ");
    scanf("%f", &area_1);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB_1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &qtd_pts_turisticos_1);

    // CRIANDO O CÓDIGO DA CARTA 1
    cod_1[0] = estado_1[0];
    cod_1[1] = '0';
    cod_1[2] = '1';
    cod_1[3] = '\0';

    // ------------CARTA 2------------

    printf("\n\nCOLETA DE DADOS DA CARTA 2\n\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado_2);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome_cidade_2);

    printf("Digite a população: ");
    scanf("%d", &populacao_2);
    
    printf("Digite a área: ");
    scanf("%f", &area_2);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB_2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &qtd_pts_turisticos_2);

    // CRIANDO O CÓDIGO DA CARTA 2
    cod_2[0] = estado_2[0];
    cod_2[1] = '0';
    cod_2[2] = '1';
    cod_2[3] = '\0';


    printf("\n\n----APRESENTAÇÃO DE CARTAS----");

    printf("\n\nCARTA 1\n\n");

    printf("Estado: %c\n", estado_1[0]);
    printf("Código: %s\n", cod_1);
    printf("Cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f reais\n", PIB_1);
    printf("Quantidade de pontos turisticos: %d\n", qtd_pts_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional(populacao_1, area_1));
    printf("PIB per capita: %.2f reais\n", pibPerCapita(PIB_1, populacao_1));

    printf("\n\nCARTA 2\n\n");

    printf("Estado: %c\n", estado_2[0]);
    printf("Código: %s\n", cod_2);
    printf("Cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f reais\n", PIB_2);
    printf("Quantidade de pontos turisticos: %d\n", qtd_pts_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional(populacao_2, area_2));
    printf("PIB per capita: %.2f reais\n", pibPerCapita(PIB_2, populacao_2));
    

}
