#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int som = 0;
int dis_elet(int n,int indice);

int main(){
    int n; 
    do{
        scanf("%d",&n);
    }while(n < 1 || n > 118);

    dis_elet(n,0);
}

int dis_elet(int n,int indice){

    int vet_elet[19] = {2,2,6,2,6,2,10,6,2,10,6,2,14,10,6,2,14,10,6};
    int vet_camada[19] = {1,2,2,3,3,4,3,4,5,4,5,6,4,5,6,7,5,6,7};
    char vet_simb[19] = {'s', 's', 'p', 's', 'p', 's', 'd', 'p', 's', 'd', 'p','s', 'f','d', 'p', 's', 'f', 'd', 'p'};

    int mais,tamanho,resto;
     
    som += vet_elet[indice]; 

    if(n < 3){
        printf("%d %c%d\n",vet_camada[indice],vet_simb[indice],n);
        resto = n;
        mais = n;
    }

    else if(som < n){
        printf("%d %c%d\n",vet_camada[indice],vet_simb[indice],vet_elet[indice]);
        
        if(som + vet_elet[indice + 1] > n){         

            indice++;                               
            mais = som + vet_elet[indice] - n;     
            
            if(som + mais == n)som += mais;         
            else if(som - mais == n)som -= mais;

           if(som == n){                            
                printf("%d %c%d #\n",vet_camada[indice],vet_simb[indice],mais);
                resto = mais;
            }
            if(som + vet_elet[indice] - mais == n){  
                mais = (som + vet_elet[indice]- mais) - (som);
                printf("%d %c%d #\n",vet_camada[indice],vet_simb[indice],mais);
                resto = mais;
            }
        }
        else return som + vet_elet[indice],dis_elet(n,indice+=1);
    }
    else{
        printf("%d %c%d\n",vet_camada[indice],vet_simb[indice],vet_elet[indice]);
        resto = vet_elet[indice];
        mais = vet_elet[indice];
    }
    printf("\nM = %d\n",vet_camada[indice]);

    int negativo = 0, p = 0,posicao = 0;

    switch(vet_simb[indice])
    {
        case 's':{printf("L = 0\n\n");tamanho = 2;p = 0;};break;
        case 'p':{printf("L = 1\n\n");tamanho = 6;p = -1;};break;
        case 'd':{printf("L = 2\n\n");tamanho = 10;p = -2;};break;
        case 'f':{printf("L = 3\n\n");tamanho = 14;p = -3;};break;
    }

    if(p == 0)tamanho = 2;

    posicao = p - 1;

    for(int i=0;i<2;i++){
        if(i == 1 && resto > 0){
            posicao = p - 1;negativo = 1;
        }
        for(int j=0;j<tamanho/2;j++){
            Sleep(200);
            if(resto <= 0)printf("0 ");
            if(resto > 0){
                printf("1 ");
                posicao++;
                resto--;
            }
        }
        Sleep(200);
        if(i == 0)printf("+\n");
        else if(i == 1)printf("-\n");
    }
    printf("ML = %d",posicao);
    Sleep(500);

    if(negativo == 1)printf("\n\nS = +1\n     2\n");
    else if(negativo == 0)printf("\n\nS = -1\n     2\n");
}
