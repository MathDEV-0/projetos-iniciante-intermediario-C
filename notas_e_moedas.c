#include <stdio.h>

int main(){
    double valor;
    int notas100=0,notas50=0,notas20=0,notas10=0,notas5=0,notas2=0;

    scanf("%lf",&valor);

    valor= valor*100;

    //Número de cédulas
    notas100=(int)valor/10000;
    valor= (int)valor % 10000;
    notas50=(int)valor/5000;
    valor= (int)valor % 5000;
    notas20=(int)valor/2000;
    valor= (int)valor % 2000;
    notas10=(int)valor/1000;
    valor= (int)valor % 1000;
    notas5=(int)valor/500;
    valor= (int)valor % 500;
    notas2=(int)valor/200;
    valor= (int)valor % 200;
    
    int moedas1=0,moedas50=0,moedas25=0,moedas10=0,moedas5=0,moedas01=0;

    //Moedas
    moedas1=(int)valor/100;
    valor= (int)valor % 100;
    moedas50=(int)valor/50;
    valor= (int)valor % 50;
    moedas25=(int)valor/25;
    valor= (int)valor % 25;
    moedas10=(int)valor/10;
    valor= (int)valor % 10;
    moedas5=(int)valor/5;
    valor= (int)valor % 5;
    moedas01=(int)valor/1;
    valor= (int)valor % 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",notas100);
    printf("%d nota(s) de R$ 50.00\n",notas50);
    printf("%d nota(s) de R$ 20.00\n",notas20);
    printf("%d nota(s) de R$ 10.00\n",notas10);
    printf("%d nota(s) de R$ 5.00\n",notas5);
    printf("%d nota(s) de R$ 2.00\n",notas2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",moedas1);
    printf("%d moeda(s) de R$ 0.50\n",moedas50);
    printf("%d moeda(s) de R$ 0.25\n",moedas25);
    printf("%d moeda(s) de R$ 0.10\n",moedas10);
    printf("%d moeda(s) de R$ 0.05\n",moedas5);
    printf("%d moeda(s) de R$ 0.01\n",moedas01);
    /*
    1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01*/

    return 0;
}