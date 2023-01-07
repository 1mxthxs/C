#include <stdio.h>

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
    int mais,tamanho,nao_exato = 0,resto; 
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
            else if(som - mais == n)som = som - mais;

           if(som == n){                            
                printf("%d %c%d #\n",vet_camada[indice],vet_simb[indice],mais);
                resto = mais;
            }
            if(som + vet_elet[indice] - mais == n){  
                mais = (som + vet_elet[indice]- mais) - (som);
                printf("%d %c%d #\n",vet_camada[indice],vet_simb[indice],mais);
                nao_exato = 1;
                resto = mais;
            }
        }
        else return som + vet_elet[indice],dis_elet(n,indice+=1);
    }
    else {
        printf("%d %c%d\n",vet_camada[indice],vet_simb[indice],vet_elet[indice]);
        resto = vet_elet[indice];
        mais = vet_elet[indice];
    }
    printf("\nm = %d\n",vet_camada[indice]);

    int p = 0,pos = 0;
    switch(vet_simb[indice])
    {
        case 's':{printf("l = 0\n");tamanho = 2;p = 0;};break;
        case 'p':{printf("l = 1\n");tamanho = 6;p = -1;};break;
        case 'd':{printf("l = 2\n");tamanho = 10;p = -2;};break;
        case 'f':{printf("l = 3\n");tamanho = 14;p = -3;};break;
    }
    int vet_ml[tamanho/2][2];

    int metade_tam = tamanho/2,posicao = metade_tam/2 * -1,negativo = 0;
    if(p == 0){
        printf("%d ----%d\n",mais,p);
        tamanho = 2;
    }

        pos = p - 1;
        int neg = 0;
        printf("\n");
        for(int i=0;i<2;i++){
            if(i == 1 && resto > 0){pos = p - 1;neg = 1;}
            for(int j=0;j<tamanho/2;j++){
                //printf(" %d&%d",resto,j);
                //if(mais == 3){vet_ml[1][0] = 0;resto++;mais++;}
                //if(resto <= 0)vet_ml[i][j] = 0;
                //if(resto > 0){vet_ml[i][j] = 1;

                if(resto <= 0)printf("0 ");

                if(resto > 0){printf("1 ");
                
                pos++;
                //if(i == 0 && j == 2 && resto == 1)resto++;
                resto--;}
            }
           if(neg == 0)printf("+\n");
           else if(neg == 1)printf("-\n");
        }

        printf("\nml = %d",pos);
        if(neg == 1)printf("\n+1\n 2\n");
        else if(neg == 0)printf("\n-1\n 2\n");

    
}
