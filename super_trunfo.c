#include <stdio.h>

int main(){
    char cod1[7];
    char cod2[7];
    char estd1[50];
    char estd2[50]; 
    char cdd1[80];
    char cdd2[80];
    int ppl1, ppl2;
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2;

    printf("Digite dois codigos de carta:\n");
    scanf("%s",&cod1);
    scanf("%s",&cod2);

    printf("Digite dois estados:\n");
    scanf("%s",&estd1);
    scanf("%s",&estd2);

    printf("Digite duas cidades:\n");
    scanf("%s",&cdd1);
    scanf("%s",&cdd2);

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
    printf("Codigo da carta um%s\n",cod1);
    printf("Estado:%s\n",estd1);
    printf("Cidade:%s\n",cdd1);
    printf("Populacao%d\n",ppl1);
    printf("Area:%.2f\n",area1);
    printf("Pib:%.2f\n",pib1);
    printf("Numero de pontos turisticos%d\n",ponto1);

    //carta dois
    printf("Codigo da carta dois:%s\n",cod2);
    printf("Estado:%s\n",estd2);
    printf("Cidade:%s\n",cdd2);
    printf("Populacao%d\n",ppl2);
    printf("Area:%.2f\n",area2);
    printf("Pib:%.2f\n",pib2);
    printf("Numero de pontos turisticos%d\n",ponto2);


    return 0;
}
