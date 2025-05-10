#include <stdio.h>

int main(){
    char cod1[7], cod2 [7];
    char estd1[50], estd2[50]; 
    char cdd1[80], cdd2[80];
    int ppl1, ppl2;
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2;

    printf("Digite dois codigos de carta:\n");
    scanf("%s %s",cod1, cod2);

    printf("Digite dois estados:\n");
    scanf("%s &s",&estd1, estd2);

    printf("Digite duas cidades:\n");
    scanf("%s %s",cdd1, cdd2);

    printf("Digite dois numeros de populacao:\n");
    scanf("%d",&ppl1);
    scanf("%d",&ppl2);

    printf("Digite o valor de duas areas:\n");
    scanf("%f",&area1);
    scanf("%f",&area2);

    printf("Digite dois pib:\n");
    scanf("%f",&pib1);
    scanf("%f",&pib2);

    printf("Digite dois pontos turisticos:\n");
    scanf("%d",&ponto1);
    scanf("%d",&ponto2);

    //carta um
    printf("\nCodigo da carta um: %s\n",cod1);
    printf("Estado: %s\n",estd1);
    printf("Cidade: %s\n",cdd1);
    printf("Populacao: %d\n",ppl1);
    printf("Area: %.2f\n",area1);
    printf("Pib: %.2f\n",pib1);
    printf("Numero de pontos turisticos: %d\n",ponto1);

    //carta dois
    printf("\nCodigo da carta dois: %s\n",cod2);
    printf("Estado: %s\n",estd2);
    printf("Cidade: %s\n",cdd2);
    printf("Populacao: %d\n",ppl2);
    printf("Area: %.2f\n",area2);
    printf("Pib: %.2f\n",pib2);
    printf("Numero de pontos turisticos: %d\n",ponto2);

    //comparando cartas
    densidd1 = ppl1 / area1;
    densidd2 = ppl2 / area2;
    capita1 = pib1 / ppl1;
    capita2 = pib2 / ppl2;
    
    printf("\nDensidade populacional carta um: %.2f\n",densidd1);
    printf("Pib per capita carta um: %.2f\n",capita1);
    printf("Densidade populacional carta dois: %.2f\n",densidd2);
    printf("Pib per capita carta dois: %.2f\n",capita2);
    
    if (capita1>capita2)
    {
    printf("\nResultado: carta %s\n",cod1);
    }else{
    printf("Resultado: carta %s\n",cod2);
    }
    
    if (densidd1<densidd2){
    printf("Vencedor: %s %s\n", cdd1,estd1);
    }else{
    printf("Vencedor: %s %s\n",cdd2,estd2);
    }
    return 0;
}
