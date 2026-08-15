#include <stdio.h>

void dano(int *vida, int dano){
    *vida = *vida - dano;
}

void resdano(int *vida){
    *vida = *vida + 20;
}

void pontuacaodupla(int *pontuacao){
    *pontuacao = *pontuacao * 2;
}

int main(){

    int vida, pontuacao, daano; 
    vida=100;
    pontuacao=20;

    int *pvida, *ppontuacao;
     pvida = &vida;
     ppontuacao = &pontuacao;

    printf("INICIO DA JOGADA\n");
    printf("VIDA INICIAL : %d\n ENDERECO : %p \n", *pvida, pvida);
    printf("PONTUACAO : %d\n ENDERECO : %p \n", *ppontuacao, ppontuacao);

    printf("\n\n");

    printf("DANO LEVADO\n");
    printf("QUAL O DANO LEVADO?");
    scanf("%d", &daano);
    dano(pvida, daano); 
    printf("VIDA APOS DANO LEVADO: %d\n", vida);

    printf("\n\n");

    printf("RESTAURAR VIDA\n");
    resdano(pvida);
    printf("VIDA APOS A RESTAURACAO: %d\n", vida);

    printf("\n\n");

    printf("PONTUACAO APOS O TURNO\n");
    pontuacaodupla(ppontuacao);
    printf("PONTUACAO ATUAL: %d\n", pontuacao);

    printf("\n\n");

    printf("FINAL DA JOGADA\n");
    printf("VIDA FINAL : %d\n ENDERECO : %p \n", vida, &vida);
    printf("PONTUACAO : %d\n ENDERECO : %p \n", pontuacao, &pontuacao);


    return 0;
}