#include <stdio.h>
int main(){
	
	struct lista{
		char nome[100];
		int horario[3];
      char espaco[2];
		int data[3];
		char tipo[40];
		char observacao[40];
	}lista;
    
	scanf("%[^\n]",&lista.nome);
	scanf("%2d%1c%2d%1c%4d",&lista.data[0],&lista.espaco[0],&lista.data[1],&lista.espaco[1],&lista.data[2]);
	scanf("%2d%1c%2d%1c%2d",&lista.horario[0],&lista.espaco[0],&lista.horario[1],&lista.espaco[1],&lista.horario[2]);
	scanf("%s",&lista.tipo);

    //getchar();
    //fgets(lista.observacao,100,stdin);
	//scanf("%s",&lista.observacao);

	printf("Nome: %s\n",lista.nome);
	printf("Data: %.2d / %.2d / %.4d\n",lista.data[0],lista.data[1],lista.data[2]);
	printf("Horario: %.2dh%.2dm%ds\n",lista.horario[0],lista.horario[1],lista.horario[2]);
	printf("Tipo: %s\n",lista.tipo);
	printf("Observacao: %s\n",lista.observacao);

}