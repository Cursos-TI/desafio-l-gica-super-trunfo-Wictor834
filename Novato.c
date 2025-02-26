#include <stdio.h>

int main(){

    int A01;
    int A02;
    char estado;
    char cidade[20];
    char carta[10];
    int populacao;
    float area;
    float PIB;
    int turistico;

    printf("Digite o estado: \n");
    scanf("%c", &estado);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o número da carta: \n");
    scanf("%s", &carta);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f" , &PIB);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d" , &turistico);

    printf("O nome do estado é: %c \n" , estado);
    printf("O nome da cidade é: %s \n" , cidade);
    printf("O número da carta é: %s \n", carta);
    printf("O número da população é: %dM \n", populacao);
    printf("O tamanho da área em km² é: %f km² \n" , area);
    printf("O número do PIB é: %f bilhões \n", PIB);
    printf("O número de pontos turisticos é: %d \n", turistico);


    if(São paulo > Bahia){
        printf("Carta A01 venceu !!!");
    }else{
        printf("Carta B01 venceu !!!");
    }
                    
    
    
                    //Informações usada como exemplo//

    //Estado: A //                            //Estado: B //
    //Cidade: Salvador//                      //Cidade: Guarulhos//
    //Carta: A01//                            //Carta: B01//
    //População: 14 milhões//                 //População: 1 milhão//
    //Área: 567.1 km²//                       //Área: 319.2 km²//
    //PIB: 62 bilhões//                       //PIB: 77 bilhões//
    //Números de pontos turísticos: 8//       //Números de pontos turísticos: 6//

    

    





}