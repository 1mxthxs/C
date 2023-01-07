#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    
    int a = 1,select = -1,vez = 0,sair = 0;
    float vet[a];

    float saldo = 400.00;
    #define LIMITE_DIARIO (3);
    int qtd_saques = 0;


    vet[0] = 0;
    
    do{
        system("cls");
        if(select==2 && vez == 1)a--;

        printf("=========Banco========\n\n    Saldo: R$ %.2f\n    1 - Depositar\n    2 - Sacar\n    3 - Extrato\n",saldo);
        //printf("1-Adicionar valores\n2-Ver valores\n3-Sair\n");

        do{
            printf("=> ");
            scanf("%d",&select);
        }while(select < 0 || select > 3 );

        if(select == 1){
            do{
                printf("\n===Depositar===\n=>  ");
                scanf("%f",&vet[a-1]);
                if(vet[a-1]<0)printf("\nValor invalido\n");
            }while(vet[a-1]<0);
            saldo += vet[a-1];
            a++;
        }
        if(select == 2 && qtd_saques == 3){
                printf("\nLimite de saques diarios excedido\n\n");
                Sleep(2000);
        }
        else if(select==2){
            do{
                printf("\n===Sacar===\n=>  ");
                scanf("%f",&vet[a-1]);
                if(vet[a-1]<0 || vet[a-1]>500)printf("\nValor invalido\n");
                if(vet[a-1]>saldo)printf("\nSaldo insuficiente\n");

            }while(vet[a-1]<0 || vet[a-1]>saldo || vet[a-1]>500);
            saldo -= vet[a-1];
            vet[a-1] = vet[a-1] * -1;
            qtd_saques++;
            a++;
        }
        if(select== 3){
            printf("\n\n===Extrato===\n");
            for(int i=0; i<a; i++){
                if(vez == 0){printf("\nNenhum valor foi adicionado\n");}
                if(i != a-1){
                    if(vet[i]<0)printf("Saque: R$%.2f\n",vet[i]);
                    if(vet[i]>0)printf("Deposito: R$%.2f\n",vet[i]);
                    Sleep(700);
                }
            }
        Sleep(2000);
        printf("\n");
        }

        if(select == 0)sair = 1;
        vez++;
    }while(sair != 1);
}