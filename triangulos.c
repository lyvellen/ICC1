include <stdio.h>

int verificarExistenciaTriangulo(int a, int b, int c){ //OPERADOR LÓGICO 'E' PARA A FUNÇÃO RETORNAR VERDADE APENAS QUANDO TODOS OS ARGUMENTOS FOREM TRUE.
    return (a + b > c) && ( a + c > b) && (b +c > a); //A SOMA DOS LADOS DEVE SER MENOR QUE O TERCEIRO LADO
}

void classificarTriangulo(int a, int b, int c){
    if(a == b && b==c)
    printf("\nSeu triângulo é um equilátero\n");
    else if (a == b || b == c || a == c)
    printf("\nSeu triângulo é um iósceles\n");
    else
    printf("\nSeu triângulo é um escaleno\n");
}
int main (){
    int a, b, c;
    int maior, lado;
    printf("Insira 3 números para a verificação da condição de existência do seu triângulo:  ");
    scanf("%d %d %d", &a, &b, &c);

    //verificação da condição de formação
    if(a >= b && a >= c)
     maior = a;
    else if(b >= a && b >=c)
     maior = b; 
     else if( c >= a && c >= b)
     maior = c;

     printf("Este é o maior lado: %d\n", maior);

     //Verificação de existência do triângulo 

     if(verificarExistenciaTriangulo(a,b,c)){
        printf("\nSeu triângulo existe\n");
        classificarTriangulo(a,b,c);
     } else{
        printf("\nSeu triângulo não existe\n");
     }

        return 0;
}
