#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int res,dnv = 1;

    srand(time(NULL));

    for(int i=0; i<10;i++){
        res = rand()%3;
        switch(res){
            case 0:printf("Volei\n");break;
            case 1:printf("Jogar\n");break;
            case 2:printf("Tik Tok\n");break;
        }
    }
}