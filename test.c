#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compress(char str[]) {
    int strlength = strlen(str) - 1;
    char buffer[65];
    int len = 0;

    for (int i = 0; i < strlength; i++) {
        int count = 1;

        while (i < strlength - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        len += sprintf(buffer + len, "%i%c", count, str[i]);
    }
    printf("%s", buffer);
}

int main() {
    char str[32];

    fgets(str, 32, stdin);

    compress(str);

    system("pause");
    return 0;
}