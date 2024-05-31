#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
//setlocale(LC_ALL, "English");

/*
            ---ATRIBUINDDO VALOR A UMA VARIAVEL DO TIPO INT---
int valor; //criei uma variavel para guardar valor do tipo inteiro
valor = 666; //atribuí um valor para a variavel valor

int main (){
    
    printf("Atribua um valor para a sua variavel:");
    scanf("%d", &valor);
    printf("Valor da minha variavel:%d", valor);

return 0;

}

            ---ATRIBUINDO VALOR A UMA VARIAVEL DO TIPO FLOAT---
float numero = 3.1415;

int main() {

//  printf("o valor da minha variavel eh %.4f", numero);

    printf("Digite um numero real: ");
    scanf("%f", &numero);
    printf("O valor digitado foi %.2f", numero);
  
return 0;

}

            ---ATRIBUINDO VALOR A UMA VARIAVEL DO TIPO CHAR---
char sexo = 's';

int main() {
    printf("Digite seu sexo: (f, F, m ou M)");
    scanf("%c", &sexo);
    printf("valor da variavel sexo:%c", sexo);

return 0;
}

            ---UTILIZANDO GETCHAR PARA LER VARIAVEL DO TIPO CHAR---
char letra;

int main (){
    printf("Digite uma letra:");
    letra = getchar();
    
    printf("Valor da variavel letra:%c",letra); 

return 0;
}

            ---UTILIZANDO A FUNÇÃO GETC PARA LER VARIAVEL DO TIPO CHAR---
char letra;

int main (){
    printf("Digite um caracter:");
    letra = getc(stdin);
    
    printf("Caracter lido:%c",letra); 

return 0;
}

            ---UTILIZANDO GETC PARA LER VARIAVEL DO TIPO CHAR---
char letra;

int main (){
    printf("Digite um caracter:");
    letra = fgetc(stdin);
    
    printf("Caracter lido:%c",letra); 

return 0;
}
        ---LENDO VÁRIOS VALORES---
int n1, n2, n3;

int main(){
    printf("Escreva 3 numeros inteiros: ");
    scanf("%d %d %d",&n1, &n2, &n3);
    printf("Os valores digitados foram: %d, %d e %d", n1, n2, n3);

return 0;
}

            //CRIANDO UM PROGRAMA PRA LER NOME, IDADE, PESO E ALTURA
char sexo;
int idade;
float peso, altura;

int main(){
    printf("DIGITE SEXO(F OU M), IDADE, PESO E ALTURA!\n");
    scanf("%c %d %f %f ", &sexo, &idade, &peso, &altura);
    printf("SEXO: %c\n IDADE: %d\n PESO: %.3f\n ALTURA: %2.f\n", sexo, idade, peso, altura);


}
return 0;

            // EXIBINDO O TAMANHO DE UMA VARIAVEL NA MAEMÓRIA

int main(){
    printf("O tamanho de um float na memoria eh: %d bytes\n", sizeof(float));

    return 0;
}

            // INCREMENTANDO 1 A UM VALOR 

short int x = 664;

int main(){
    x++;
    printf("Valor de x = %d\n", x);

return 0;
}

long long int x = 100000000;

int main(){
    printf("Tamano de x:  ")
}

float x = 3.1415;

int main(){
    printf("UMA VARIAVEL DO TIPO FLOAT OCUPA:%.4f\n",x );

}

long double x = 6.6669;

int main(){
    printf("Uma variavel long float ocupa %d bytes na memoria\n", sizeof(x));
    __mingw_printf("a variavel x tem o valor de: %.4Lf\n", x);

return 0;
}

            //---CARACTERE DE ESCAPE---
int main(){
    printf("\n ESPACAMENTO\n");
    printf("\t TABULACAO\n");
    printf(" \"\ \'\ \n");
    printf("\\\n");

return 0;

}
            //---OPERACOES MATEMATICAS E CONVERSAO DE TITULO---
int a = 666, b = 69;

int main(){
    printf("RESULTADO DA SOMA \'A'\ + \'B'\:%d\n", a+b);
    printf("RESULTADO DA SUBTRACAO \'A'\ - \'B'\:%d\n", a-b);
    printf("RESULTADO DA MULTIPLICACAO \'A'\ * \'B'\:%d\n", a*b);
    printf("RESULTADO DA DIVISAO \'A'\ / \'B'\:%d\n", a/(float)b);
    
return 0;
}

            //---OPERADOR DE RESTO DA DIVISAO---
int a = 10, b = 7;

int main(){
    printf("Resto da divisao inteira %d\n", a % b);


return 0;
}

            //---OPERADOR DE INCREMENTO---


int contador = 69;

int main(){
    printf("Valor: %d\n", ++contador);
    //para decremento é a mesma coisa só que com o --


return 0;
}

            //---UTILIZANDO ACENTUAÇÃO---
    //setscale(LC_ALL, NULL)->PADRAO DA LINGUAGEM C
    //setscale(LC_ALL, "")->PADRAO DA LINGUAGEM DO SISTEMA OPERACIONAL
    //setscla(LC_ALL, "Portuguese")->PADRAO DA LINGUA DEFINIDA ENTRE ""(aconcelhavel que seja a mesma do SO)
 int main(){
    printf("%s\n", setlocale(LC_ALL,NULL));

    printf("BATATÃO");

return 0;
 }
 

            ---OPERADOR LOGICO "IF/ELSE" &&---
int idade;
char sexo;

int main(){
    printf("DIGITE SEU SEXO 'M' OU 'F' E SUA IDADE:");
    scanf("%c""%d",&sexo, &idade);

    if(idade ==18 && sexo == 'm')
        printf("ALISTAMENTO OBRIGATORIO!!!");
    else
        printf("METE O PEH!!!");

return 0;

}

            ---OPERADOR LOGICO "OU" ||

int idade;

int main(){
    printf("DIGITE SUA IDADE:");
    scanf("%d", &idade);
    if(idade<=5 || idade>=60){
        printf("TEM DIREITO A GRATUIDADE!!!");
    }
    else{
        printf("NAO TEM DIREITO A GRATUIDADE");
    }

return 0;
}

            ---SWITCH CASE---
int opcao;
int main(){
    
    printf("\n\t SEJA BEM VINDO AO MENU\n");
    printf("\n 1 - CADASTRO\n 2 - VENDER\n 3 - BUSCAR\n 4 - IMPRIMIR\n 5 - SAIR\n ");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("CADASTRANDO\n");
        break;
    case 2:
        printf("VENDENDO\n");
        break;
    case 3:
        printf("BUSCANDO\n");
        break;
    case 4:
        printf("IMPRIMINDO\n");
        break;
    case 5:
        printf("SAINDO\n");
        break;
    default:
        printf("OPCAO INVALIDA\n");
    }
return 0;
}

Lista de Exercícios II - Professor Wagner Gaspar
Estruturas de decisão e seleção
1) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
2) Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos.
3) Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
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
6) Faça um programa para ler um número inteiro e verificar se corresponde a um mês válido no
calendário. Caso corresponda, escrever o nome do mês, caso contrário, escrever a mensagem ‘Mês
Inválido’.
7) Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
8) Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias.
9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).
10) Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”.

*/


int b=0;

int main(){
 

    for(b = 0; b <= 9; b++)
    printf("%d ", b);


return 0;
}






















