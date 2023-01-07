#include <stdio.h>
void main(){
	
	int i,j,n = 3,id = 0;
	//scanf se o usuario quiser mudar o valor de n
	//scanf("%d",&n);
	int m[n][n];
	//scanf preenchendo a Matriz
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		scanf("%d",&m[i][j]);
		}
	  }	
	//verifcar se ela é identidade ou não
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i == j && m[i][j] == 1 && m[i][0] + m[i][1] + m[i][2] == 1)id++;
		////printf("%d",id);	
		}
	}
	//n = 3;
		if(id == n)printf("\nMatriz Identidade\n");
		else printf("\nA Matriz nao e Identidade\n");
}