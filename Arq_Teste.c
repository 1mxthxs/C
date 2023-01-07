#include <stdio.h>

int main(){
	
	int n,i,j;
	scanf("%d",&n);
	
	int m[n][n];
	int menor = m[0][0];
	for(i = 0; i<n; i++)
	{
		for(j = 0;j<n;j++){
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i = 0; i<n; i++)
	{
		for(j = 0;j<n;j++){
			if(m[i][j] < menor)menor = m[i][j];
		}
	}
	printf("%d",menor);
}