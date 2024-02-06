#include <stdio.h>

int Ackermann(int m, int n){
    if(m ==0 && n>0) return n+1;
    else if (n==0 && m>0) return Ackermann(m-1,1);
    else if (m>0 && n>0) return Ackermann(m-1,Ackermann(m,n-1));
    else return -1;
}

int main(){
    printf("\n-------------------------------------\n");
    printf("       RECUSVIDADE - ACKERMANN        \n");
    printf("-------------------------------------\n");

    int m,n;
    printf("Digite o valor de m: ");
    scanf("%d",&m);
    printf("Digite o valor de n: ");
    scanf("%d",&n);

    int resultado = Ackermann(m,n);

    printf("O resultado da função é: %d\n", resultado);


    return 0;
}

/*A(3, 0) = A(2,1)
A(2,1) = A(1, A(2,0)
A(2,0) = A(1,1)
A(1,1) = A(0, A(1,0))
A(1,0) = A(0,1)
A(0,1) = 2  */










