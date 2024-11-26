//2.Concatenando Strings:
//Leia duas strings e concatene-as, imprimindo o resultado.
//Crie uma função para concatenar duas strings.

#include <stdio.h>
#include <string.h>

char* concatenaString(char string1[], char string2[]){
    static char stringConcatenada[60];
    strcpy(stringConcatenada, string1); // Copia a string1 para stringConcatenada
    strcat(stringConcatenada, string2); // Concatena string2 a stringConcatenada
    return stringConcatenada;
}

int main(){
    char str1[30], str2[30];
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);
    printf("Strings concatenadas: %s", concatenaString(str1, str2));
}
