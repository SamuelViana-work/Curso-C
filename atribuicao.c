#include <stdio.h>
#include <stdlib.h>

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

*/

            //---OPERADOR DE RESTO DA DIVISAO---
int a = 10, b = 7;

int main(){
    printf("Resto da divisao inteira %d\n", a % b);


return 0;
}




















