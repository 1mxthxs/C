#include<stdio.h>
int vez =0,tem = 0,n = 1,vet_d[];
int vet_dinamico(int vet1[n],int num){
    int selec = 0;
    tem = 0;
    int vet2[n++];
    for(int i=0;i<n;i++){
        vet2[i] = 0;
    }
    for(int i=0;i<n;i++)vet2[i] = vet1[i];

    /*for(int i=0;i<n;i++){
        if(num == vet2[i]){
            //tem = 1;
            printf("Este valor existe na lista\n");
            printf("%d %d\n",vet2[i],vet1[i]);
            return 3;
        }
    }*/

    //if(tem == 1)printf("Este valor existe na lista\n");
    //printf("Valor: ");
    //scanf("%d",&vet2[n-1]);
    vet2[n-1] = num;
    vez++;
    //return 3;
    return vet2; 
}
int main(){
    int nn = 0,*vet,m = 0;
    int vet1[1] = {0};
    int num = 0;
    for(int i=0;i<5;i++){
        printf("h: ");
        scanf("%d",&num);
        *vet = vet_dinamico(vet1,num);
        m++;
        printf("%d",vet);
        /*for(int i=0;i<m;i++){
            if(vet[i] == num)printf("Numero exite na lista\n");
            //if(vet_dinamico(vet1,num) == 3)printf("-%d %d\n",vet_dinamico(vet1,num));
        }*/
        //if(vet_dinamico(vet1,num) == 3)printf("-%d %d\n",vet_dinamico(vet1,num));
    }
}