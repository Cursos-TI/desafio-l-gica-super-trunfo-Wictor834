#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[3], codigo1[5], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Variáveis da Carta 2
    char estado2[3], codigo2[5], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Variáveis que serão calculadas
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);
    
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Atributo escolhido: POPULAÇÃO 
    printf("\n--- Comparação de Cartas (Atributo: População) ---\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);

    // Lógica da comparação
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // Exibir também os cálculos extras
    printf("\n--- Informações Extras ---\n");

    printf("Carta 1 - Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Carta 1 - PIB per Capita: %.2f\n", pibPerCapita1);

    printf("Carta 2 - Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Carta 2 - PIB per Capita: %.2f\n", pibPerCapita2);

    

                    
    
    
                    //Informações usada como exemplo//

    //Estado: A //                            //Estado: B //
    //Cidade: Salvador//                      //Cidade: Guarulhos//
    //Carta: A01//                            //Carta: B01//
    //População: 14 milhões//                 //População: 1 milhão//
    //Área: 567.1 km²//                       //Área: 319.2 km²//
    //PIB: 62 bilhões//                       //PIB: 77 bilhões//
    //Números de pontos turísticos: 8//       //Números de pontos turísticos: 6//

    

    


    
 return 0;


}