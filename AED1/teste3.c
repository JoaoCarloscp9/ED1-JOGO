#include <stdio.h>
int main (){

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