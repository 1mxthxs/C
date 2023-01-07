#include <stdio.h> 
#include <stdlib.h>

//Simbolos do 'X' e 'O'
char X = 'X';
char O = 'O';
//

void jogo_da_velha(char vet[9],char ma[3][3],int vez,int temp,int tipo,char jog1[30],char jog2[30])
{	
int i,l,c,numeric = 7,win,soma[16],ren = 0;
char n;



	if(temp == 1){	
		//soma = 0;
		
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
		else {
			if(tipo == 2){		
	for(l=0;l<3;l++){
		//numeric = 1;
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
	   if(vez == 1)printf("Vez de %s (%c)\n",jog1,X);
	    if(vez == 2)printf("Vez de %s (%c)\n",jog2,O);
	
	do{
	scanf("%d",&n);

	//printf("%d ",n);
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
	
	//	for(i=0;i<9;i++){
			if(vet[n - 1] == 1)n = -1;
			//printf("%d<->%d ",n,vet[i]);
		//}
	}while(n < 1 || n > 9);
	//printf("\n");
		for(i=0;i<9;i++){
		if(vet[i] < 1 ||vet[i] > 9 && vet[i] != X && vet[i] != O)vet[i]= '-';
		if(vez == 1 && i == n - 1)vet[i] = X;
		if(vez == 2 && i == n - 1)vet[i] = O;
		
		
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
		printf("%c ",ma[l][c]);
		}
		printf("\n");
	}
	if(vez == 2)vez = 1;
	else if(vez == 1) vez = 2;
	temp++;

//////////////VER QUEM GANHOU

	//soma = 0;
	soma[8]=0;
	for(c = 0;c < 3;c++){
		if(ma[c][2] == O)soma[8]++;
	}
	//printf("%d---\n",soma[9]);
	
	soma[7]=0;
	for(c = 0;c < 3;c++){
		if(ma[c][2] == X)soma[7]++;
	}
	
	soma[15]=0;
	for(c = 0;c < 3;c++){
		if(ma[c][1] == O)soma[15]++;
	}
	//printf("%d---\n",soma[9]);
	
	soma[4]=0;
	for(c = 0;c < 3;c++){
		if(ma[c][1] == X)soma[4]++;
	}
	
		soma[14]=0;
	for(c = 0;c < 3;c++){
		if(ma[c][0] == O)soma[14]++;
	}
	//printf("%d---\n",soma[9]);
	
	soma[3]=0;
	for(c = 0;c < 3;c++){
		if(ma[c][0] == X)soma[3]++;
	}
	
	soma[13]=0;
	for(c = 0;c < 3;c++){
		if(ma[2][c] == O)soma[13]++;
	}
	//printf("%d---\n",soma[9]);
	
	soma[2]=0;
	for(c = 0;c < 3;c++){
		if(ma[2][c] == X)soma[2]++;
	}
	//printf("%d---\n",soma[0]);

		soma[10]=0;
	for(c = 0;c < 3;c++){
		if(ma[1][c] == O)soma[10]++;
	}
	//printf("%d---\n",soma[9]);
	
	soma[1]=0;
	for(c = 0;c < 3;c++){
		if(ma[1][c] == X)soma[1]++;
	}
	//printf("%d---\n",soma[0]);
	
	soma[9]=0;
	for(c = 0;c < 3;c++){
		if(ma[0][c] == O)soma[9]++;
	}
	//printf("%d---\n",soma[9]);
	
	soma[0]=0;
	for(c = 0;c < 3;c++){
		if(ma[0][c] == X)soma[0]++;
	}
	//printf("%d---\n",soma[0]);
	
	l = 2;
	//if(soma != 3)
	
	soma[12]=0;
	for(c = 0;c < 3;c++){
		if(ma[l][c] == O)soma[12]++;
		l--;
	}
	//printf("%d---\n",soma[12]);
	l = 2;
	soma[6]=0;
	for(c = 0;c < 3;c++){
		if(ma[l][c] == X)soma[6]++;
		l--;
	}
	//printf("%d---\n",soma[6]);

		
	soma[5] =0;
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
		if(l == c){if(ma[l][c] == X)soma[5]++;}
		}
	}
	//printf("%d\n",soma[5]);
	
	soma[11] =0;
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
		if(l == c){if(ma[l][c] == O)soma[11]++;}
		}
	}
	//printf("%d\n",soma[11]);
	if(temp == 10)
	{
	win = 0;	
	for(i=0;i<16;i++){
	if(soma[i] != 3)win++;
	}
	}
	else{
	for(i=0;i<7;i++){
	if(soma[i] == 3)win = 1;
	//printf("%d ",soma[i]);
	}
	for(i=8;i<16;i++){
	if(soma[i] == 3)win = 2;
	}
	}
	
	char vet2[9] = {0,0,0,0,0,0,0,0,0},ma2[3][3];
	if(win == 16){
		printf("Velhou :^\n");
		printf("\nDeseja reiniciar o jogo?\n1 - Sim\n2 - Nao\n");
		do{
		scanf("%d",&ren);
		}while(ren < 1 || ren > 2);
		if(ren == 1 && vez == 1){
		system("cls");
		//system("clear");
		return jogo_da_velha(vet2,ma2,1,1,tipo,jog1,jog2);}
		if(ren == 1 && vez == 2){
		system("cls");
		//system("clear");
		return jogo_da_velha(vet2,ma2,2,1,tipo,jog1,jog2);}
	
	}
	else if(win == 1){
	printf("%s (X) Ganhou!\n",jog1);
		printf("\nDeseja reiniciar o jogo?\n1 - Sim\n2 - Nao\n");
		do{
		scanf("%d",&ren);
		}while(ren < 1 || ren > 2);
		if(ren == 1 && vez == 1){
		system("cls");
		//system("clear");
		return jogo_da_velha(vet2,ma2,1,1,tipo,jog1,jog2);}
		if(ren == 1 && vez == 2){
		system("cls");
		//system("clear");
		return jogo_da_velha(vet2,ma2,2,1,tipo,jog1,jog2);}
	
	}
	else if(win == 2){
	printf("%s (O) Ganhou!\n",jog2);
		printf("\nDeseja reiniciar o jogo?\n1 - Sim\n2 - Nao\n");
		do{
		scanf("%d",&ren);
		}while(ren < 1 || ren > 2);
		if(ren == 1 && vez == 1){
		//system("cls");
		//system("clear");
		return jogo_da_velha(vet2,ma2,1,1,tipo,jog1,jog2);}
		if(ren == 1 && vez == 2){
		//system("cls");
		//system("clear");
		return jogo_da_velha(vet2,ma2,2,1,tipo,jog1,jog2);}
	
	}
	else if(temp < 10)return jogo_da_velha(vet,ma,vez,temp,tipo,jog1,jog2);
	
	
}
int main() 
{
	int vez = 1,temp = 1,tipo = 1,conf = 0;
	char vet[9] = {0,0,0,0,0,0,0,0,0},ma[3][3],ren = 'm',jog1[30],jog2[30];
	//system("cls");
	//system("clear");
	printf("--Jogo da Velha--\n\n");
	printf("Nome do Jogador '%c': ",X);
	scanf("%s",&jog1);
	printf("Nome do Jogador '%c': ",O);
	scanf("%s",&jog2);	
	
	printf("\n1 - Jogar\n2 - Abrir Configuracoes\n");
	do{
	scanf("%d",&conf);
	}while(conf < 1 || conf > 2);
	if(conf == 2){
	printf("\nEscolha o Teclado Numerico\n1 - 12345...\n2 - 789\n    456\n    123\n\n");	
	do{scanf("%d",&tipo);
	}while(tipo < 1 || tipo > 2);
	
	printf("Mude o simbolo do X:\n");
	scanf("%s",&X);
	printf("Mude o simbolo do O:\n");
	scanf("%s",&O);

	}
	else tipo = 2;
		jogo_da_velha(vet,ma,vez,temp,tipo,jog1,jog2);
/*	do{	
	printf("\nDeseja reinciar o jogo?\ns ou n\n");
	
	printf("%c-",ren);
	scanf("%c",&ren);
	}while(ren != 'n');*/
}
