#include <stdio.h>
#include <string.h>
char str[32];

void rel(char str[]){
    for (int i = 0; i < strlen(str); i++){
        int tmp = 1;
        while (str[i] == str[i + 1]){
            tmp++;
            i++;
        }
        printf("%i%c\n", tmp, str[i]);
    }
}

int main(){
    scanf("%s", &str);
    rel(str);
}