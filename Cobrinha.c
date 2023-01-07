#include <stdio.h> 
#include <stdlib.h>

int main(){
	
	system("cls");
	
	int n,i,j,l = 0,c = 0;
	scanf("%d",&n);
	char m[n][n];
            
	for(int vez = n * n;vez > 0;vez--){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		m[i][j] = '0';
		}
	}
		//if(c > 0)m[l][c - 1] = '*';
		//if(c > 1)m[l][c - 2] = '*';
		m[l][c] = '*';
		c++;
		if(c>=n){c=0;l++;}
	system("cls");

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%c ",m[i][j]);
		}
	printf("\n");	
	}
	sleep(1);
	}	
}
