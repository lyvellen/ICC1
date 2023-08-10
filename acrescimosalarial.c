#include <stdio.h>
#define ANO_ATUAL 2023

struct Cargo {      
    char nome[20];
    float porcentagem[3];
};

void mostraOpcoesCargo(struct Cargo cargos[]) {
    printf("Escolha abaixo a numeração referente ao seu cargo\n");
    for (int i = 0; i < 3; i++) {
        printf("%d - %s\n", i + 1, cargos[i].nome);
    }
}

int main() {
    struct Cargo cargos[3] = {{"Gerente", {1.12, 1.11, 1.10}},
                              {"Engenheiro", {1.11, 1.10, 1.09}},
                              {"Técnico", {1.12, 1.11, 1.10}}};

    int cargo, dia, mes, anoAdmissao, tempoServ;
    float salario;

    mostraOpcoesCargo(cargos);
    scanf("%d", &cargo);

    printf("Insira a data da sua admissão\n");
    scanf("%d %d %d", &dia, &mes, &anoAdmissao);

    tempoServ = ANO_ATUAL - anoAdmissao;
    printf("\nSeu tempo de serviço na nossa empresa é: %d\n", tempoServ);

    printf("Insira aqui o valor correspondente ao seu salário atual:");
    scanf("%f", &salario);

    int faixa; 
    if (tempoServ >= 5) {
        faixa = 0;
    } else if (tempoServ >= 3) {
        faixa = 1;
    } else {
        faixa = 2;
    }

    switch (cargo) {
        case 1: // Gerente
            printf("Seu salário antigo R$%.2f\n", salario);
            printf("Seu salário atual R$%.2f\n", salario * cargos[0].porcentagem[faixa]);
            printf("Houve um acrescimo de R$%.2f\n", (salario * cargos[0].porcentagem[faixa]) - salario);
            break;

        case 2: // Engenheiro
            printf("Seu salário antigo R$%.2f\n", salario);
            printf("Seu salário atual R$%.2f\n", salario * cargos[1].porcentagem[faixa]);
            printf("Houve um acrescimo de R$%.2f\n", (salario * cargos[1].porcentagem[faixa]) - salario);
            break;

        case 3: // Técnico
            printf("Seu salário antigo R$%.2f\n", salario);
            printf("Seu salário atual R$%.2f\n", salario * cargos[2].porcentagem[faixa]);
            printf("Houve um acrescimo de R$%.2f\n", (salario * cargos[2].porcentagem[faixa]) - salario);
            break;

        default:
            printf("Opção de cargo inválida.\n");
    }

    return 0;
}
