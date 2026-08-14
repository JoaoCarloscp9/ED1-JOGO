#include <stdio.h>
int main(){
    int op;
    float n1,n2,res;
    printf("\n###########################\n");
    printf("\n      QUAL OPERACAO?       \n");
    printf("\n###########################\n");
    printf("\n01         SOMA         (+)\n");
    printf("\n02       SUBTRACAO      (-)\n");
    printf("\n03     MULTIPLICACAO    (*)\n");
    printf("\n04        DIVISAO       (/)\n");
    printf("\n###########################\n");
    scanf("%d", &op);
    printf("digite os numeros para ser operados na operacao escolhida.\n");
    scanf("%f%f", &n1, &n2);
    switch (op){
    case 01:
       res=n1+n2;
        break;
    case 02:
        res=n1-n2;

        break;
    case 03:
        res=n1*n2;01
        break;
    case 04:
        if(n2!=0){
        res=n1/n2;
        }else{
            printf("invalidada pois o denominador e 0");
        }
        break;
    }
    printf("O RESULDADO DA OPERACAO E:  %f", res);
    return 0;
}