#include <stdio.h>

float densidadePopulacional(float populacao, float area) {
    float resultado = populacao / area;
    return resultado;
}

float pibPerCapita(float pib, float populacao) {
    float resultado = pib / populacao;
    return resultado;
}

float superPoder(float populacao, float area, float pib, float qtd_pts_turisticos, float PIB_per_capita, float densidade_populacional) {
    densidade_populacional = (float) -densidade_populacional; // Tranansformando em negativo para o calculo final

    float resultado = populacao + area + pib + qtd_pts_turisticos + PIB_per_capita + densidade_populacional;
    return resultado;
}

// Compara as duas densidades populacionais.
int verificacaoDF(float densidade_1, float densidade_2) {
    
    if (densidade_1 < densidade_2) {
        return 1;
    } else if (densidade_1 == densidade_2) {
        return -1;
    } else {
        return 0;
    }
}


int main(){

    // Dados separados por tipos
    char estado_1[1], estado_2[1];
    char cod_1[4], cod_2[4];
    char nome_cidade_1[30];
    char nome_cidade_2[30];

    int populacao_1, qtd_pts_turisticos_1;
    int populacao_2, qtd_pts_turisticos_2, opcaoComparacao;

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

    // PIB per capita
    float pibPerCapita_1 = pibPerCapita(PIB_1, populacao_1);
    float pibPerCapita_2 = pibPerCapita(PIB_2, populacao_2);

    // Super poder
    float superPoder_1 = superPoder(populacao_1, area_1, PIB_1, qtd_pts_turisticos_1, pibPerCapita_1, densidadePopulacional(populacao_1, area_1));
    float superPoder_2 = superPoder(populacao_2, area_2, PIB_2, qtd_pts_turisticos_2, pibPerCapita_2, densidadePopulacional(populacao_2, area_2));

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
    printf("PIB per capita: %.2f reais\n", pibPerCapita_1);
    printf("Super Poder: %.2f\n", superPoder_1);


    printf("\n\nCARTA 2\n\n");

    printf("Estado: %c\n", estado_2[0]);
    printf("Código: %s\n", cod_2);
    printf("Cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f reais\n", PIB_2);
    printf("Quantidade de pontos turisticos: %d\n", qtd_pts_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional(populacao_2, area_2));
    printf("PIB per capita: %.2f reais\n", pibPerCapita_2);
    printf("Super Poder: %.2f\n", superPoder_2);

    // Comparação de cartas

    printf("\nComparação de atributos:\n");
    printf("1: Nome do Estado\n");
    printf("2: População\n");
    printf("3: Área\n");
    printf("4: PIB\n");
    printf("5: Pontos turisticos\n");
    printf("6: Densidade populacional\n");
    printf("7: PIB per capita\n");
    printf("8: Super poder\n");
    
    printf("Escolha uma comparação: ");
    scanf("%d", &opcaoComparacao);

    switch (opcaoComparacao)
    {
    case 1:
        printf("Isso apenas apresenta os nomes :D");
        printf("Estado carta 1: %s", nome_cidade_1);
        printf("Estado carta 2: %s", nome_cidade_2);
        break;
    case 2:
        if (populacao_1 > populacao_2) {
            printf("População: Carta 1 venceu (1)\n");
        } else if ( populacao_1 == populacao_2) {
            printf("População: Empate, são iguais\n");
        } else {
            printf("População: Carta 2 venceu (0)\n");
        }
        break;
    case 3:
        if (area_1 > area_2) {
            printf("Área: Carta 1 venceu (1)\n");
        } else if ( area_1 == area_2) {
            printf("Área: Empate, são iguais\n");
        } else {
            printf("Área: Carta 2 venceu (0)\n");
        }
        break;
    case 4:
        if (PIB_1 > PIB_2) {
            printf("PIB: Carta 1 venceu (1)\n");
        } else if ( PIB_1 == PIB_2) {
            printf("PIB: Empate, são iguais\n");
        } else {
            printf("PIB: Carta 2 venceu (0)\n");
        }
        break;
    case 5:
        if (qtd_pts_turisticos_1 > qtd_pts_turisticos_2) {
            printf("Quantidade de pontos turisticos: Carta 1 venceu (1)\n");
        } else if ( qtd_pts_turisticos_1 == qtd_pts_turisticos_2) {
            printf("Quantidade de pontos turisticos: Empate, são iguais\n");
        } else {
            printf("Quantidade de pontos turisticos: Carta 2 venceu (0)\n");
        }
        break;
    case 6:
        int result_densidadePopulacional = verificacaoDF(densidadePopulacional(populacao_1, area_1), densidadePopulacional(populacao_2, area_2));
        if (result_densidadePopulacional == 1) {
            printf("Densidade Populacional: Carta 1 venceu (1)\n");
        } else if (result_densidadePopulacional == -1) {
            printf("Densidade Populacional: Empate, são iguais\n");
        } else {
            printf("Densidade Populacional: Carta 2 venceu (0)\n");
        }
        break;
    case 7:
        if (pibPerCapita_1 > pibPerCapita_2) {
            printf("PIB per capita: Carta 1 venceu (1)\n");
        } else if ( pibPerCapita_1 == pibPerCapita_2) {
            printf("PIB per capita: Empate, são iguais\n");
        } else {
            printf("PIB per capita: Carta 2 venceu (0)\n");
        }
        break;
    case 8:
        if (superPoder_1 > superPoder_2) {
            printf("Super Poder: Carta 1 venceu (1)\n");
        } else if ( pibPerCapita_1 == pibPerCapita_2) {
            printf("Super Poder: Empate, são iguais\n");
        } else {
            printf("Super Poder: Carta 2 venceu (0)\n");
        }
        break;

    default:
        printf("Opção inválida");
        break;
    }


}