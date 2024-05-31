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

            ---QUESTÃO 7---
7) Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saída: 1:1:12


int seg;

int main(){
    printf("INSIRA O HORARIO EM SEGUNDOS:");
    scanf("%d",&seg);
    printf("O HORARIO INSERIDO NO MODELO H/M/S É: %d:%d:%d ", )

}

            Lista de Exercícios II - Professor Wagner Gaspar
Estruturas de decisão e seleção










    


}



3) Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.



4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.

float dolar, real;
int escolha;

int main(){
    printf("\n\t SEJA BEM VINDO A CASA DA MÃE JOANA!!!\n\t SUA CASA DE CAMBIO FAVORITA!!!\n");
    printf("\n\t DIGITE 1 PARA FAZER CAMBIO DE REAL PARA DOLAR\n\t DIGITE 2 PARA FAZER CAMIO DE DOLAR PARA REAL\n");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
        printf("\n\t DIGITE O VALOR QUE QUER CAMBIAR DE REAL PARA DOLAR:\n");
        scanf("%f", &real);
        printf("\n\t SEU VALOR EM DOLAR EH: R$ %.2f", real/5.30);
        break;
        case 2:
        printf("\n\t DIGITE O VALOR QUE QUER CAMBIAR DE DOLAR PARA REAL:");
        scanf("%f", &dolar);
        printf("\n\t SEU VALOR EM REAL EH: R$ %.2f", dolar*5.30);
        break;
        default:
            printf("\n\t OPCAO INVALIDA!\n");
        

    }
return 0;
}
5) O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
com a tabela abaixo:

IMC Interpretação
Menor que 18,5 Abaixo do peso
Entre 18,5 e menor que 25 Peso normal
Entre 25 e menor que 30 Sobrepeso
Entre 30 e menor que 35 Obesidade grau 1
Entre 35 e menor que 40 Obesidade grau 2
Maior ou igual a 40 Obesidade grau 3
float peso, altura, imc;

int main(){
    printf("\n\t ****CALCULADRA DE IMC****\n");
    printf("\n\t DIGITE SEU PESO EM KG E SUA ALTURA EM METRO\n\t OBS: USE '.' PARA SEPARAR AS CASAS DECIMAIS!\n");
    scanf("%f%f", &peso, &altura);
    imc = (peso/altura)/altura;
    printf("SEU IMC EH:%.2f", imc);

    if(imc<18.5)
        printf("\n\t VOCE ESTA ABAIXO DO PESO IDEAL!\n\t PRUCURE UM NUTRICIONISTA ANTES DE REALIZAR QUALQUER MUDANCA ALIMENTAR!\n");
    if(imc>18.5 && imc<25)
        printf("\n\t PARABENS! VOCE ESTA NO SEU PESO IDEAL! CONTINUE MANTENDO UMA ALIMENTACAO SAUDAVEL!\n");
    if(imc>25 && imc<30)
        printf("\n\t VOCE ESTA SOBREPESO! PROCURE UM NUTRICIONISTA ANTES DE REALIZAR QUALQUER MUDANCA ALIMENTAR!\n");
    if(imc>30 && imc<35)
        printf("\n\t VOCE COM OBESIDADE GRAU 1! PROCURE UM NUTRICIONISTA ANTES DE REALIZAR QUALQUER MUDANCA ALIMENTAR!\n");
    if(imc>35 && imc<40)
        printf("\n\t VOCE COM OBESIDADE GRAU 2! PROCURE UM NUTRICIONISTA ANTES DE REALIZAR QUALQUER MUDANCA ALIMENTAR!\n");
    if(imc>=40)
        printf("\n\t VOCE COM OBESIDADE GRAU 3! PROCURE UM NUTRICIONISTA ANTES DE REALIZAR QUALQUER MUDANCA ALIMENTAR!\n");

return 0;
}

6) Faça um programa para ler um número inteiro e verificar se corresponde a um mês válido no
calendário. Caso corresponda, escrever o nome do mês, caso contrário, escrever a mensagem ‘Mês
Inválido’.

int n;

int main(){
    printf("DIGITE UM NUMERO CORRESPONDENTE A UM MES DO CALENDARIO");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("MES REFERENCIA: JANEIRO");
            break;
        case 2:
            printf("MES REFERENCIA: FEVEREIRO");
            break;
        case 3:
            printf("MES REFERENCIA: MARCO");
            break;
        case 4:
            printf("MES REFERENCIA: ABRIL");
            break;
        case 5:
            printf("MES REFERENCIA: MAIO");
            break;
        case 6:
            printf("MES REFERENCIA: JUNHO");
            break;
        case 7:
            printf("MES REFERENCIA: JULHO");
            break;
        case 8:
            printf("MES REFERENCIA: AGOSTO");
            break;
        case 9:
            printf("MES REFERENCIA: SETEMBRO");
            break;
        case 10:
            printf("MES REFERENCIA: OUTUBRO");
            break;
        case 11:
            printf("MES REFERENCIA: NOVEMBRO");
            break;
        case 12:
            printf("MES REFERENCIA: DEZEMBRO");
            break;

        default:
            printf("MES INVALIDO!!!");

return 0;
    }
}

7) Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.

char letra;

int main(){
    printf("\n\t DIGITE 1 LETRA DE 'A' A 'Z' \n");
    scanf("%c", &letra);

    if(letra =='a'||letra =='e'||letra =='i'||letra =='o'|| letra =='u'){
        printf("VOCE DIGITOU UMA VOGAL!");
    }
        else{
            printf("VOCE DIGITOU UMA CONSOANTE!");
    }
return 0;
}

8) Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias.
int n;

int main(){
    printf("DIGITE UM NUMERO CORRESPONDENTE A UM MES DO CALENDARIO");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("\n\t MES REFERENCIA: JANEIRO\n");
            printf("\n\t POSSUI 31 DIAS");
            break;
        case 2:
            printf("\n\t MES REFERENCIA: FEVEREIRO\n");
            printf("\n\t POSSUI 28 DIAS");
            break;
        case 3:
            printf("\n\t MES REFERENCIA: MARCO\n");
            printf("\n\t POSSUI 31 DIAS\n");
            break;
        case 4:
            printf("\n\t MES REFERENCIA: ABRIL\n");
            printf("\n\t POSSUI 30 DIAS\n");
            break;
        case 5:
            printf("\n\t MES REFERENCIA: MAIO\n");
            printf("\n\t POSSUI 31 DIAS\n");
            break;
        case 6:
            printf("\n\t MES REFERENCIA: JUNHO\n");
            printf("\n\t POSSUI 30 DIAS\n");
            break;
        case 7:
            printf("\n\t MES REFERENCIA: JULHO\n");
            printf("\n\t POSSUI 31 DIAS\n");
            break;
        case 8:
            printf("\n\t MES REFERENCIA: AGOSTO\n");
            printf("\n\t POSSUI 31 DIAS\n");
            break;
        case 9:
            printf("\n\t MES REFERENCIA: SETEMBRO\n");
            printf("\n\t POSSUI 30 DIAS\n");
            break;
        case 10:
            printf("\n\t MES REFERENCIA: OUTUBRO\n");
            printf("\n\t POSSUI 31 DIAS\n");
            break;
        case 11:
            printf("\n\t MES REFERENCIA: NOVEMBRO\n");
            printf("\n\t POSSUI 30 DIAS\n");
            break;
        case 12:
            printf("\n\t MES REFERENCIA: DEZEMBRO\n");
            printf("\n\t POSSUI 31 DIAS\n");
            break;

        default:
            printf("MES INVALIDO!!!");
    }
return 0;
}

int n;

int main(){
    printf("DIGITE UM NUMERO CORRESPONDENTE A UM MES DO CALENDARIO");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("\n\t MES REFERENCIA: JANEIRO\n");
            printf("\n\t POSSUI 31 DIAS");
            break;
        case 2:
            printf("\n\t MES REFERENCIA: FEVEREIRO\n");
            printf("\n\t POSSUI 28 DIAS");
            break;
        case 3:
            printf("\n\t MES REFERENCIA: MARCO\n");
            printf("\n\t POSSUI 31 DIAS\n");
            break;
        case 4:
            printf("\n\t MES REFERENCIA: ABRIL\n");
            printf("\n\t POSSUI 30 DIAS\n");
            break;
        case 5:
            printf("\n\t MES REFERENCIA: MAIO\n");
            printf("\n\t POSSUI 31 DIAS\n");
            break;
        case 6:
            printf("\n\t MES REFERENCIA: JUNHO\n");
            printf("\n\t POSSUI 30 DIAS\n");
            break;
        case 7:
            printf("\n\t MES REFERENCIA: JULHO\n");
            printf("\n\t POSSUI 31 DIAS\n");
            break;
        case 8:
            printf("\n\t MES REFERENCIA: AGOSTO\n");
            printf("\n\t POSSUI 31 DIAS\n");
            break;
        case 9:
            printf("\n\t MES REFERENCIA: SETEMBRO\n");
            printf("\n\t POSSUI 30 DIAS\n");
            break;
        case 10:
            printf("\n\t MES REFERENCIA: OUTUBRO\n");
            printf("\n\t POSSUI 31 DIAS\n");
            break;
        case 11:
            printf("\n\t MES REFERENCIA: NOVEMBRO\n");
            printf("\n\t POSSUI 30 DIAS\n");
            break;
        case 12:
            printf("\n\t MES REFERENCIA: DEZEMBRO\n");
            printf("\n\t POSSUI 31 DIAS\n");
            break;

        default:
            printf("MES INVALIDO!!!");
    }
return 0;
}





10) Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”.


float l1, l2, l3;

int main(){
    printf("INSIRA A MEDIDA DE 3 LADOS DE UM TRIANGULO USANDO '.' COMO VIRGULA:");
    scanf("%f%f%f", &l1, &l2,&l3);

    if(l1<=0 && l2<=0 && l3<=0)
        printf("NAO EH POSSIVEL FORMAR UM TRIANGULO");
    if(l1!=l2 && l1!=l3 && l2!=l3)
        printf("O TRIANGULO EH ESCALENO");
    if(l1==l2 && l1==l3 && l2!=l3  ||  )
        printf("O TRIANGULO EH ISOSCELES");
    if(l1==l2 && l1==l3 && l2==l3)
        printf("O TRIANGULO EH EQUILATERO");
return 0;
}

    1) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
int v1, v2, v3; 

int main(){
    printf("\n\t SEJA BEM VINDO AO EXIBIDOR!\n ");
    printf("\n\t DIGITE 3 VALORES:\n");
    scanf("%d%d%d", &v1, &v2, &v3);

    if(v1>v2 && v1>v3){
        printf("O MAIOR VALOR INSERIDO FOI:%d\n",v1);
        }
        if(v2>v1 && v2>v3){
        printf("O MAIOR VALOR INSERIDO FOI:%d\n",v2);
            }
            if(v3>v1 && v3>v2){
        printf("O MAIOR VALOR INSERIDO FOI:%d\n",v3);
        }
    if(v1<v2 && v1<v3){
        printf("O MENOR VALOR INSERIDO FOI:%d\n",v1);
        }
        if(v2<v1 && v2<v3){
        printf("O MENOR VALOR INSERIDO FOI:%d\n",v2);
            }
            if(v3<v1 && v3<v2){
        printf("O MENOR VALOR INSERIDO FOI:%d\n",v3);
        }
    
return 0;
2) Escreva um programa em C que lê 5 números inteiros, 
um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, 
imprima na tela a quantidade de números negativos
e positivos.


int n1, n2, n3, n4, n5, positivos=0, negativos=0;

int main(){
    printf("DIGITE 5 VALORES:");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    if(n1<0)
        negativos++;
    else
        positivos++; 
    
    if(n2<0)
        negativos++;
    else
        positivos++;
    
    if(n3<0)
        negativos++;
    else
        positivos++;

    if(n4<0)
        negativos++;
    else
        positivos++;
    
    if(n5<0)
        negativos++;
    else
        positivos++;

    printf("NUMEROS POSITIVOS %d NUMERO NEGATIVOS %d",positivos,negativos);

return 0;
}

9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).

float nota1, nota2, nota3, ponderada, aritimetica;
char escolha;

int main(){
    printf("\n\t DIGITE A NOTA DA A1, A2 E A3\n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    ponderada = (nota1*3+nota2*3+nota3*4)/3+3+4;
    aritimetica = (nota1+nota2+nota3)/3;
    
    printf("\n\t DIGITE 'A' PARA REALIZAR O CALCULO DE MEDIA ARITIMETICA E 'B' PARA MEDIA PONDERADA\n");
    scanf(" %c", &escolha);

    switch(escolha){
    case 'a':
    printf("A MEDIA ARITIMETICA EH:%.2f", aritimetica);
    break;
    
    case 'b':
    printf("A MEDIA PONDERADA EH:%.2f", ponderada);
    break;
    
    default:
    printf("ESCOLHA INVALIDA!");
}

return 0;
}
*/








