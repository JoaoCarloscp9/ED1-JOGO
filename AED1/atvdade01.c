
# include <stdio.h>
int main(){
    int vida = 100;
    int tesouros = 0;
    int *pvida , *ptesouros;

    pvida = &vida;
    ptesouros = &tesouros;

    printf("VIDA ATUAL: %d\n", *pvida);
    printf("O personagem sofreu 30 de dano.\n");
    printf("O ENDEREÇO DA VIDA É %p\n: ", pvida);
    *pvida= *pvida - 30; 
    printf("VIDA APOS O DANO: %d\n", *pvida);

    printf("\n\n");

    printf("Apos o dano o personagem achou um alimento, que tem poder de cura, o personagem come e recupera 1/2 do dano sofrido.\n");
    printf("O ENDEREÇO DA VIDA É %p\n: ", pvida);
    printf("VIDA ATUAL: %d\n", *pvida);
    *pvida = *pvida + 15;
    printf("VIDA APOS O ATRIBUTO DO ALIMENTO: %d\n", *pvida);
    printf("APOS SUA CAMINHADA ELE ACHOU O TESOURO.\n");

    printf("\n\n");

    printf("ESTADO ANTES DE ENCONTRA-LO: %d\n", *ptesouros);
    printf("O ENDEREÇO DO TESOURO É %p\n: ", ptesouros);
    *ptesouros = *ptesouros + 1;
    printf("ESTADO APOS ENCONTRA-LO: %d\n", *ptesouros);



    return 0;
}
