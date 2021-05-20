#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//12Clock to 24Clock conversion program
int main(){
    int time;
    char clock[20];

    printf("Input a 12 hour clock time (Example: 6PM. The AM and PM are case sensitive.)\n");
    scanf("%i%s", &time, &clock);

    if (strcmp(clock, "AM") == 0)
    {
        if (time > 13)
        {
            printf("Error, bad input.");
            exit(0);
        }
    }else if (strcmp(clock, "PM") == 0)
    {
        if (time > 12)
        {
            printf("Error, bad input.");
            exit (0);
        }
        
        time += 12;

        if (time == 24)
        {
        time = 0;
        }
    
    }
    
    printf("%i:00", time);
}