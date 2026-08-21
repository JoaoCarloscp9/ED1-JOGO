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
    printf("VIDA INICIAL : %d\n ENDERECO : %p \n", *pvida, (void*)pvida);
    printf("PONTUACAO : %d\n ENDERECO : %p \n", *ppontuacao, (void*)ppontuacao);

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

    printf("\n\n");

    printf("digite os valores da pontuacao de cada nivel do percurso\n");

    int plataforma[5];
    int *pplataforma;

    int pontuacaoT=0, alturaT=0;

    pplataforma=&plataforma[0];

    for(int i=0; i<5; i++){
        printf("andar: %d\n valor de cada andar: \n ", i);
        scanf("%d", (pplataforma + i));
    }


    // ao usar "(pplataforma+i)" ao inves de "(&plataforma[y])", que sao exatamente a mesma coisa,
    // o computador nao soma "i" bytes crus. ele sabe que "pplataforma" e um ponteiro do tipo int,
    // entao cada passo do "i" equivale a pular int bytes (geralmente 4 bytes) por vez.
    // por isso o ponteiro sempre cai certinho no comeco do proximo inteiro do vetor.


    printf("\n\n");
    printf("PONTUACAO APOS O TURNO ENTRE AS PLATAFROMAS\n");
    
    for(int i=0; i<5; i++){

        int t= *(pplataforma+i);

    //no caso anterior (pplataforma +i) eu estava apenas passando o endereço, nesse caso como o "*" esta presente
    //vamos puxar exatamente os valores que foram armazenados.   

        printf("indice: %d\n endereco: %p\n conteudo: %d\n", i, (void*)(pplataforma+i), t);

        pontuacaoT=pontuacaoT+t;
        alturaT=alturaT+1;
    }

    printf("\n\n");

    printf("PONTUACAO TOTAL: %d\n", pontuacaoT);
    printf("ALTURA TOTAL: %d\n", alturaT);

    return 0;
}