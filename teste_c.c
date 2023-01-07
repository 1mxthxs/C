#include<stdio.h>

typedef struct {
	unsigned short int dia, mes, ano;
} tipoData;

tipoData lerData(){
	tipoData retorno;
	scanf("%d %d %d",&retorno.dia,&retorno.mes,&retorno.ano);
	//printf("%d\n",retorno.mes);
	return retorno;
}
int validaData(tipoData dt){ 
	//printf("%d",dt.mes);
	int verify=0;
	if(dt.ano < 1900 || dt.ano > 2050 )return 0;
	else if(dt.mes < 0 || dt.mes > 12)return 0;
	else if((dt.mes == 1 || dt.mes == 3 || dt.mes == 5 || dt.mes == 7 || dt.mes == 8 || dt.mes == 10 || dt.mes == 12) && (dt.dia < 1 || dt.dia > 31))return 0;
	else if((dt.mes == 4 || dt.mes == 6 || dt.mes == 9 || dt.mes == 11) && (dt.dia < 1 || dt.dia > 30))return 0;
	else if(dt.mes == 2 && dt.ano % 4 == 0 && (dt.dia < 1 || dt.dia > 29))return 0;
	else if(dt.mes == 2 && dt.ano % 4 != 0 && (dt.dia < 1 || dt.dia > 28))return 0;
	else return 1;
}
void main(){
	tipoData dt;
	dt = lerData();
	printf("%d",validaData(dt));
}