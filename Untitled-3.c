#include <stdio.h>

int main(){
    int a = 1,select = 0,vez = 0,sair = 0;
    int vet[a];
    vet[0] = 0;
    
    do{
        if(select==2 && vez == 1)a--;

        printf("1-Adicionar valores\n2-Ver valores\n3-Sair\n");

        do{scanf("%d",&select);}while(select < 1 || select > 3);

        if(select==1){
            scanf("%d",&vet[a-1]);
            a++;
        }
        if(select== 2){
            for(int i=0; i<a; i++){
                if(vez == 0){printf("Nenhum valor foi adicionado\n");}
                if(i != a-1)printf("%d ",vet[i]);
            }
        }
        if(select == 3)sair = 1;
        vez++;
    }while(sair != 1);
}