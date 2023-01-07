#include <stdio.h>
int som = 0,somaa=0;
int dis_elet(int n,int indice,int soma){

    int vet_elet[19] = {2,2,6,2,6,2,10,6,2,10,6,2,14,10,6,2,14,10,6};
    int vet_camada[19] = {1,2,2,3,3,4,3,4,5,4,5,6,4,5,6,7,5,6,7};
    char vet_simb[19] = {'s', 's', 'p', 's', 'p', 's', 'd', 'p', 's', 'd', 'p','s', 'f','d', 'p', 's', 'f', 'd', 'p'};
    int mais;
    som += vet_elet[indice];
    //printf("soma:%d & vetelet:%d & indice:%d\n",som,vet_elet[indice],indice);
    
    
    //&& soma + vet_elet[indice] < n
    if(som < n){
        //printf("%d \n",indice);
        printf("%d %c%d\n",vet_camada[indice],vet_simb[indice],vet_elet[indice]);
        
        if(som + vet_elet[indice + 1] > n){
            indice++;
            mais = som + vet_elet[indice] - n;
            
            //printf("soma:%d & vetelet:%d & indice:%d & mais:%d\n",som,vet_elet[indice],indice,mais);
            if(som + mais == n)som += mais;
            else if(som - mais == n)som = som - mais;
            //som  = som + vet_elet[indice] - mais;
            if(som == n){
                printf("%d %c%d",vet_camada[indice],vet_simb[indice],mais);
            }
            if(som + vet_elet[indice] - mais == n){
                mais = (som + vet_elet[indice]- mais) - (som);
                printf("%d %c%d",vet_camada[indice],vet_simb[indice],mais);
            }
        }
        else return som + vet_elet[indice],dis_elet(n,indice+=1,som + vet_elet[indice]);
    }
    else printf("%d %c%d",vet_camada[indice],vet_simb[indice],vet_elet[indice],som);

}
int main(){
    int n;
   // char c[2];

    do{
    scanf("%d",&n);
    }while(n < 1 || n > 118);   

    dis_elet(n,0,0);
}