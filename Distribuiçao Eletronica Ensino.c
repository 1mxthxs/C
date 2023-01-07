#include <stdio.h>
int som = 0;//varialvel int soma
int dis_elet(int n,int indice,int soma); //dizendo que a função dis_elet() existe, so q mais em baixo

int main(){ // se função principal
    int n; // numero dado pelo usuario 'n'
    do{//abre loop
    scanf("%d",&n);
    }while(n < 1 || n > 118);// enquanto o numero dado pelo usuario for menor que 1 e maior que 118, então ele pede outro numero   

    dis_elet(n,0,0);//chamando a função com (numero dado pelo usuario,indice=0,soma+ elemento do vetor = 0
}

int dis_elet(int n,int indice,int soma){

    int vet_elet[19] = {2,2,6,2,6,2,10,6,2,10,6,2,14,10,6,2,14,10,6};//base de dados eletrons
    int vet_camada[19] = {1,2,2,3,3,4,3,4,5,4,5,6,4,5,6,7,5,6,7};//base de dados da camada
    char vet_simb[19] = {'s', 's', 'p', 's', 'p', 's', 'd', 'p', 's', 'd', 'p','s', 'f','d', 'p', 's', 'f', 'd', 'p'};//base de dados da subcamada
    int mais; // varialvel int 'mais'
    som += vet_elet[indice]; // soma += vetor 

    if(som < n){//se a soma atual for menor que n, ele entra para aumentar a soma//
        printf("%d %c%d\n",vet_camada[indice],vet_simb[indice],vet_elet[indice]); //print Ex "4 s2"
        
        if(som + vet_elet[indice + 1] > n){         //se a soma atual + o proximo elemento do vetor, for maior que n,então ele

            indice++;                               //ele aumenta o indice, se n = 11, se o ultimo estava 2 p6, entao ele fica 3 s2 
            mais = som + vet_elet[indice] - n;      //mais é = a soma atual + proximo elemento do vetor - numero da pelo usuario
            
            if(som + mais == n)som += mais;         //se soma atual + a varialvel 'mais' for igual a numero dado pelo usuario, entao soma + 'mais'
            else if(som - mais == n)som = som - mais;//se nao, soma - mais for igual a n, entao soma - 'mais'

            if(som == n){                            //se agora, soma for igual a numero dado pelo usuario, então ele emprimi Ex"n = 11 3 s1"
                printf("%d %c%d",vet_camada[indice],vet_simb[indice],mais);
            }
            if(som + vet_elet[indice] - mais == n){  //se a soma atual - elemento do vetor[indice] - 'mais' for igual a numero dado pelo usuario,entao
                mais = (som + vet_elet[indice]- mais) - (som);// 'mais' é igual (soma + elemento do vetor[indice] - 'mais') - soma, Ex"n = 11, 'mais' = 10 + 2 - 1 - 10, 'mais' = 1, 3 s1"
                printf("%d %c%d",vet_camada[indice],vet_simb[indice],mais);//printf Ex:"n = 11, mais = 1, 3 s1"
            }
        }
        else return som + vet_elet[indice],dis_elet(n,indice+=1,som + vet_elet[indice]);//se soma + proximo elemento do vetor for menor que n, entao ele retorna para a função com n, indice++, soma + elemento do vetor[indice] 
    }
    else printf("%d %c%d",vet_camada[indice],vet_simb[indice],vet_elet[indice],som);//se soma for igual a numero dado pelo usuario, entao printf Ex:"n = 4, 2s2" ou "n = 2, 1s2"

}
