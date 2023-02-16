#include <iostream>
#include <string.h>

struct Cadastro{
    char nome[100];
    int dia, mes, ano, diaAtual = 16, mesAtual = 02, anoAtual = 2023;
    int idade;
    char sexo[1];
    int vet[100];

    Cadastro(){
        strcpy(nome, "");
        dia=0;
        mes=0;
        ano=0;
        strcpy(sexo, "");
    }
    void ler(){
        printf("Digite o seu nome:\n");
        scanf("%s", nome);
        printf("Digite a data de nascimento:\n");
        scanf("%d %d %d", &dia, &mes, &ano);
        printf("Digite seu sexo: M ou F\n");
        scanf("%s", sexo);
        calculaIdade();
    }
    void calculaIdade(){
        idade = anoAtual - ano;
        if(mesAtual <= mes){
            idade--;
        }
        else if(diaAtual < dia){
            idade--;
        }

    }
    void imprimir(){
        printf("\nName: %s\nAge: %d\nSex: %s\n", nome, idade, sexo);
    }
};
int Menu(){
    int menu;
    printf("\n1- Cadastrar Cliente\n");
    printf("\n2- Listar Clientes\n");
    scanf("%d", &menu);
    return menu;
}
int main(){
    int menu=0;
    int i=0;
    Cadastro Cliente[50];
    while (1==1){

        menu = Menu();

        if (menu==1){

            Cliente[i].ler();
            i++;

        }else if (menu==2){

            for (int j = 0; j < i; j++){
                Cliente[j].imprimir();
            }

        }else{

            printf("\nDigite um valor valido!\n");
            Menu();

        }
    }
}
