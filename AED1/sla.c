#include <stdio.h>
int main(){

    int vida = 100;
    int tesouros = 0;

    int *pvida, *ptesouros;

    pvida = &vida;
    ptesouros = &tesouros;

    printf("vida atual: %d\n", *pvida);
        if(*ptesouros==0){
            printf("tesouro inativo\n");

        }else{
            printf("tesouro ativo\n");
        }
    printf("Endereço: %p", pvida);
    
    printf("\n\n");
    
    printf("dano aplicado\n");
    *pvida=*pvida-25;
    printf(" vida apos o dano %d \n", *pvida);
    printf("Endereço: %p", pvida);

    printf("\n\n");

    printf("vida atual: %d\n", *pvida);
    *ptesouros=*ptesouros+1;
        if(*ptesouros==0){
            printf("tesouro inativo\n");

        }else{
            printf("tesouro ativo\n");
        }
    printf("endereco do tesouro: %p\n", &ptesouros);
    

    

    return 0;
}