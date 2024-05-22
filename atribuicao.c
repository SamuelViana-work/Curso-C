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


*/

float x = 3.1415;

int main(){
    printf("UMA VARIAVEL DO TIPO FLOAT OCUPA:%.4f\n",x );

}


















