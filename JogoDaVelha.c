#include <stdio.h> 
#include <stdlib.h>

void jogo_da_velha(int vet[9],int ma[3][3],int vez,int temp,int tipo,char jog1[30],char jog2[30])
{	
	int n,i,l,c,numeric = 7,win,soma[16];
	
	if(temp == 1){	
		if(tipo == 1){
			numeric = 1;	
			for(l=0;l<3;l++){
				for(c=0;c<3;c++){
					printf("%d ",numeric);
					numeric++;
				}
			printf("\n");
			}
		}	
		else{
			if(tipo == 2){		
				for(l=0;l<3;l++){
					for(c=0;c<3;c++){
						printf("%d ",numeric);
						numeric++;
						if(numeric == 10)numeric = 4;
						else if(numeric == 7)numeric = 1;
					}
					printf("\n");
				}
			}
		}				
	}
	if(vez == 1)printf("Vez de %s (1)\n",jog1);
	if(vez == 2)printf("Vez de %s (2)\n",jog2);
	
	do{
	scanf("%d",&n);

	switch (n)
	{
		case 1: n = 7;break;
		case 2: n = 8;break;
		case 3: n = 9;break;
		case 7: n = 1;break;
		case 8: n = 2;break;
		case 9: n = 3;break;
	}
	printf("\n");
	if(vet[n - 1] == 1)n = -1;

	}while(n < 1 || n > 9);

	for(i=0;i<9;i++){
		if(vet[i] < 1 ||vet[i] > 9)vet[i]=0;
		if(vez == 1 && i == n - 1)vet[i] = 1;
		if(vez == 2 && i == n - 1)vet[i] = 2;
	}
	
	i = 0;
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
		ma[l][c] = vet[i];
		i++;
		}
	}

	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			printf("%d ",ma[l][c]);
		}
		printf("\n");
	}
	if(vez == 2)vez = 1;
	else if(vez == 1) vez = 2;
	temp++;

//////////////VER QUEM GANHOU


	soma[0]=0;
	for(c = 0;c < 3;c++){if(ma[0][c] == 1)soma[0]++;}

	soma[1]=0;
	for(c = 0;c < 3;c++){if(ma[1][c] == 1)soma[1]++;}

	soma[2]=0;
	for(c = 0;c < 3;c++){if(ma[2][c] == 1)soma[2]++;}

	soma[3]=0;
	for(c = 0;c < 3;c++){if(ma[c][0] == 1)soma[3]++;}

	soma[4]=0;
	for(c = 0;c < 3;c++){if(ma[c][1] == 1)soma[4]++;}






	soma[8]=0;
	for(c = 0;c < 3;c++){if(ma[c][2] == 2)soma[8]++;}

	soma[7]=0;
	for(c = 0;c < 3;c++){if(ma[c][2] == 1)soma[7]++;}
	
	soma[15]=0;
	for(c = 0;c < 3;c++){if(ma[c][1] == 2)soma[15]++;}
	
	
	
	soma[14]=0;
	for(c = 0;c < 3;c++){if(ma[c][0] == 2)soma[14]++;}
	
	
	
	soma[13]=0;
	for(c = 0;c < 3;c++){if(ma[2][c] == 2)soma[13]++;}
	
	
	
	soma[10]=0;
	for(c = 0;c < 3;c++){if(ma[1][c] == 2)soma[10]++;}
	

	
	soma[9]=0;
	for(c = 0;c < 3;c++){if(ma[0][c] == 2)soma[9]++;}
	

	
	l = 2;
	soma[12]=0;
	for(c = 0;c < 3;c++){
		if(ma[l][c] == 2)soma[12]++;
		l--;
	}

	l = 2;
	soma[6]=0;
	for(c = 0;c < 3;c++){
		if(ma[l][c] == 1)soma[6]++;
		l--;
	}

	soma[5] =0;
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			if(l == c){
				if(ma[l][c] == 1)soma[5]++;
			}
		}
	}
	
	soma[11] = 0;
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			if(l == c){
				if(ma[l][c] == 2)soma[11]++;
			}
		}
	}

	if(temp == 10){
		win = 0;	
		for(i=0;i<16;i++){
			if(soma[i] != 3)win++;
		}
	}
	else{
		for(i=0;i<7;i++){
			if(soma[i] == 3)win = 1;
		}
		for(i=8;i<16;i++){
			if(soma[i] == 3)win = 2;
		}
	}
	
	if(win == 16)printf("Velhou :^\n");
	else if(win == 1)printf("%s (1) Ganhou!\n",jog1);
	else if(win == 2)printf("%s (2) Ganhou!\n",jog2);
	else if(temp < 10)return jogo_da_velha(vet,ma,vez,temp,tipo,jog1,jog2);	
}
int main(){
	int vet[9],ma[3][3],vez = 1,temp = 1,tipo = 1;
	char ren = 'm',jog1[30],jog2[30];
	//system("cls");
	//system("clear");

	printf("Nome do Jogador 1: ");
	scanf("%s",&jog1);
	printf("Nome do Jogador 2: ");
	scanf("%s",&jog2);	
	
	printf("\nEscolha o Teclado Numerico\n1 - 12345...\n\n2 - 789\n    456\n    123\n\n\n");	
	do{
		scanf("%d",&tipo);
	}while(tipo < 1 || tipo > 2);
	
	jogo_da_velha(vet,ma,vez,temp,tipo,jog1,jog2);
}
