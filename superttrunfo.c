#include <stdio.h>

int main(){
    char estado [80];
    char cod [40];
    char cdd [60];
    int popula;
    float area ;
    float pib;
    float turis;

    printf("digite o estado: \n");
    scanf ("%s",&estado);

    printf("digite o codigo da carta: \n");
    scanf("%s",&cod);

    printf("digite o nome da cidade: \n");
    scanf("%s",&cdd);

    printf("digite a populacao: \n");
    scanf("%d",&popula);

    printf("digite a area: \n");
    scanf("%f",&area);

    printf("digite o pib: \n");
    scanf("%f",&pib);

    printf("digite local de turismo: \n");
    scanf("%f",&turis);

    printf("estado: %s\n",estado);
    printf("codigo da carta:%s\n",cod);
    printf("cidade: %s\n",cdd);
    printf("populacao: %d\n",popula);
    printf("area: %f\n",area);
    printf("pib: %f\n", pib);
    printf("numero de pontos turisticos: %f\n", turis);

}
