#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


/*Curso de Programação C – Professor Wagner Gaspar
Exercícios: lista 1

5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.

6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.


*/

            //---QUESTÃO 2---
/*2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.


int a , b;

int main(){
    printf("\n\t Insira o valor de \'A'");
    scanf("\n%d", &a);
    printf("\n\t\'A'vale:%d\n", a);
    
    printf("\n\t Insira o valor de \'B'");
    scanf("\n%d", &b);
    printf("\n\t\'B'vale:%d\n", b);

    setlocale(LC_ALL,"Portuguese");
    printf("\n\t RESPOSTA QUESTÃO 2:\n");
    printf("\n\t'A'vale:%d\n", b);
    printf("\n\t'B'vale:%d\n", a);

return 0;

}
*/

            /*---QUESTÃO 3---
3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.

int x, y;

int main(){
    printf("\n\t DEFINA O VALOR DE 'X' e 'Y':\n");
    scanf("%d%d",&y, &x);
    setlocale(LC_ALL,"Portuguese");
    printf("\n\t RESPOSTA DA QUESTÃO 3:\n X=%d Y=%d\n", x, y);

return 0;
}
*/

            /*--QUESTÃO 4---
4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.

float conta, gorjeta, despesa;
int pagantes;

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n\t BEM VINDO AO RESTAURANTE 'PAGA CARO'\n");
    
    printf("\n\t Insira o valor da conta:");
    scanf("%f", &conta);
    printf("\n\t Seu conta custa: R$ %.2f\n", conta);

    printf("\n\t Insira o valor da gorjeta:");
    scanf("%f", &gorjeta);
    printf("\n\t Voce deu: R$ %.2f de gorjeta\n", gorjeta);

    printf("\n\t Insira quantas pessoas irão pagar a conta:");
    scanf("%d", &pagantes);
    printf("\n\t O valor de R$ %.2f será dividido igualmente entre os pagantes!",conta+gorjeta);

    printf("\n\t O valor que deverá ser pago por cada pagante é: R$ %.2f",(conta+gorjeta)/pagantes);

return 0;
}

            //---QUESTÃO 7---
7) Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saída: 1:1:12

*/
int seg;

int main(){
    printf("INSIRA O HORARIO EM SEGUNDOS:");
    scanf("%d",&seg);
    printf("O HORARIO INSERIDO NO MODELO H/M/S É: %d:%d:%d ", )

}
