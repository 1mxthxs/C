#include<stdio.h>
int vez =0;
void vet_dinamico(int n,int vet1[n]){
    int selec = 0;
    int vet2[n++];
    for(int i=0;i<n;i++){
        vet2[i] = 0;
    }
    for(int i=0;i<n;i++){
        vet2[i] = vet1[i];
    }
    //if(p >=1)vet1[n-1] = vet2[n-1]
    do{
    printf("\n1 - Ver Elementos do Vetor\n2 - Adicionar Elemento\n");
    do{
    scanf("%d", &selec);
    }while(selec < 1 || selec > 2);

    if(selec == 1){
        if(vez == 0)printf("Ainda nao foi adicionado nenhum valor\n");
        else
        for(int i=1;i<n;i++){
            printf("%d ",vet2[i-1]);
        }
    }
    }while(selec == 1);
    if(selec == 2){
        printf("Valor: ");
        scanf("%d",&vet2[n-1]);
        vez++;
        return vet_dinamico(n++,vet2); 
    }
}
int main(){
    int n = 0;
    int vet1[1] = {0};
    
    vet_dinamico(n,vet1);

}