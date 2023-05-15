#include <stdio.h>

void main(void)
{
    int a, b, c;

    printf("PROGRAMAS INICIAIS EM C\n");

    //2) Dados A e B imprima a soma de A e B
    printf("1. Dados A e B imprima a soma de A e B\n");
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    c = (a + b);
    printf("%d \n", c);

    //3) Dados A e B imprima a divisão de A e B
    printf("3. Dados A e B imprima a divisão de A e B\n");
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    if(b == 0){
        printf("Divisão inválida\n");
    }else{
        c = (a / b);
        printf("%d \n", c);
    }




    return(0);
}



//3) Dados A e B imprima a divisão de A e B
