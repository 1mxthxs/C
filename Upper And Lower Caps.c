#include <stdio.h>
#include <string.h>

int tam(char nome[60]){
    int res = 0;
    res = strlen(nome);
    return res;
}
char *toTitle(char nome[60]){
    switch(nome[0]){
        case 'a':nome[0] = 'A'; break;
        case 'b':nome[0] = 'B'; break;
        case 'c':nome[0] = 'C'; break;
        case 'd':nome[0] = 'D'; break;
        case 'e':nome[0] = 'E'; break;
        case 'f':nome[0] = 'F'; break;
        case 'g':nome[0] = 'G'; break;
        case 'h':nome[0] = 'H'; break;
        case 'i':nome[0] = 'I'; break;
        case 'j':nome[0] = 'J'; break;
        case 'k':nome[0] = 'K'; break;
        case 'l':nome[0] = 'L'; break;
        case 'm':nome[0] = 'M'; break;
        case 'n':nome[0] = 'N'; break;
        case 'o':nome[0] = 'O'; break;
        case 'p':nome[0] = 'P'; break;
        case 'q':nome[0] = 'Q'; break;
        case 'r':nome[0] = 'R'; break;
        case 's':nome[0] = 'S'; break;
        case 't':nome[0] = 'T'; break;
        case 'u':nome[0] = 'U'; break;
        case 'v':nome[0] = 'V'; break;
        case 'w':nome[0] = 'W'; break;
        case 'x':nome[0] = 'X'; break;
        case 'y':nome[0] = 'Y'; break;
        case 'z':nome[0] = 'Z'; break;
    }
    return nome;
}
char *toUpper(char nome[60]){
    int res = 0;
    res = strlen(nome);

    for(int i = 0; i < res; i++){
        switch(nome[i]){
            /*
            case 'á':nome[i] = 'Á'; break;
            case 'à':nome[i] = 'À'; break;
            case 'ã':nome[i] = 'Ã'; break;
            case 'â':nome[i] = 'Â'; break;
            case 'é':nome[i] = 'É'; break;
            case 'è':nome[i] = 'È'; break;
            case 'ê':nome[i] = 'Ê'; break;
            case 'í':nome[i] = 'Í'; break;
            case 'ì':nome[i] = 'Ì'; break;
            case 'î':nome[i] = 'Î'; break;
            case 'ó':nome[i] = 'Ó'; break;
            case 'ò':nome[i] = 'Ò'; break;
            case 'õ':nome[i] = 'Õ'; break;
            case 'ô':nome[i] = 'Ô'; break;
            case 'ú':nome[i] = 'Ú'; break;
            case 'ù':nome[i] = 'Ù'; break;
            case 'û':nome[i] = 'Û'; break;
            */
            case 'a':nome[i] = 'A'; break;
            case 'b':nome[i] = 'B'; break;
            case 'c':nome[i] = 'C'; break;
            case 'd':nome[i] = 'D'; break;
            case 'e':nome[i] = 'E'; break;
            case 'f':nome[i] = 'F'; break;
            case 'g':nome[i] = 'G'; break;
            case 'h':nome[i] = 'H'; break;
            case 'i':nome[i] = 'I'; break;
            case 'j':nome[i] = 'J'; break;
            case 'k':nome[i] = 'K'; break;
            case 'l':nome[i] = 'L'; break;
            case 'm':nome[i] = 'M'; break;
            case 'n':nome[i] = 'N'; break;
            case 'o':nome[i] = 'O'; break;
            case 'p':nome[i] = 'P'; break;
            case 'q':nome[i] = 'Q'; break;
            case 'r':nome[i] = 'R'; break;
            case 's':nome[i] = 'S'; break;
            case 't':nome[i] = 'T'; break;
            case 'u':nome[i] = 'U'; break;
            case 'v':nome[i] = 'V'; break;
            case 'w':nome[i] = 'W'; break;
            case 'x':nome[i] = 'X'; break;
            case 'y':nome[i] = 'Y'; break;
            case 'z':nome[i] = 'Z'; break;


            
        }  
    }
    return nome;
}
char *toLower(char nome[60]){
    int res = 0;
    res = strlen(nome);

    for(int i = 0; i < res; i++){
        switch(nome[i]){
            case 'A':nome[i] = 'a'; break;
            case 'B':nome[i] = 'b'; break;
            case 'C':nome[i] = 'c'; break;
            case 'D':nome[i] = 'd'; break;
            case 'E':nome[i] = 'e'; break;
            case 'F':nome[i] = 'f'; break;
            case 'G':nome[i] = 'g'; break;
            case 'H':nome[i] = 'h'; break;
            case 'I':nome[i] = 'i'; break;
            case 'J':nome[i] = 'j'; break;
            case 'K':nome[i] = 'k'; break;
            case 'L':nome[i] = 'l'; break;
            case 'M':nome[i] = 'm'; break;
            case 'N':nome[i] = 'n'; break;
            case 'O':nome[i] = 'o'; break;
            case 'P':nome[i] = 'p'; break;
            case 'Q':nome[i] = 'q'; break;
            case 'R':nome[i] = 'r'; break;
            case 'S':nome[i] = 's'; break;
            case 'T':nome[i] = 't'; break;
            case 'U':nome[i] = 'u'; break;
            case 'V':nome[i] = 'v'; break;
            case 'W':nome[i] = 'w'; break;
            case 'X':nome[i] = 'x'; break;
            case 'Y':nome[i] = 'y'; break;
            case 'Z':nome[i] = 'z'; break;
        }  
    }
    return nome;
}
int main(){

    char nome[60];
    scanf("%s",nome);

    printf("Nome: %s\n",nome);
    printf("Tamanho: %d\n",tam(nome));
    printf("Upper: %s\n",toUpper(nome));
    printf("Lower: %s\n",toLower(nome));
    printf("Title: %s\n",toTitle(nome));
}