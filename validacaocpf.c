#include <stdio.h>

int main() {
    int cpf[11];
    
    printf("Digite os 11 números do cpf com espaços:\n"); //Lê os 11 números em uma entrada. 
    for (int i = 0; i < 11; i++) {
        scanf("%d", &cpf[i]);
    }

// Calcula o primeiro dígito verificador X
    int multiplicadorx = 10;  
    int soma = 0;
    for (int i = 0; i < 9; i++) {  //Os números serão multiplicado de forma descrecente do 10 até o 1. O digito 1 será multiplicado por 2 segundo exigência da questão. 
        soma += cpf[i] * multiplicadorx; //O valor da multiplicação está sendo somada e acumulada na variável 'soma'. 
        multiplicadorx--;
    }
        int resto = soma % 11;  // O resto da divisão dessa soma por 11 detemina qual valor o dígito verificador X deverá receber. 
        int digitoVerificadorX;
        if (resto < 2) {
            digitoVerificadorX = 0;
        } else {
            digitoVerificadorX = 11 - resto;
        }

 // Verifica o primeiro dígito verificador 
    if (digitoVerificadorX != cpf[9]) { // Se o dígito calculado pelo nosso algoritmo foi diferente do input feito pelo usuário, entendemos que o cpf informado é inválido. 
        printf("CPF inválido.\n");
        return 0;
    }

// Calcula o segundo dígito verificador

        int multiplicadory = 11;
        soma = 0;
        for (int i = 0; i < 10; i++) {
            soma += cpf[i] * multiplicadory;
            multiplicadory--;
        }
        resto = soma % 11;
        int digitoVerificadorY;
        if (resto < 2) {
            digitoVerificadorY = 0;
        } else {
            digitoVerificadorY = 11 - resto;
        }

// Verifica o segundo dígito verificador
    if (digitoVerificadorY != cpf[10]) {
        printf("CPF inválido.\n");
    } else {
        printf("CPF válido.\n");
    }

    return 0;
}
    
