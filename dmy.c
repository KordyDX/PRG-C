#include <stdio.h>
//d = yrs, wks, dys
int main(){
    float entry;

    printf("Insert number of days\n");
    scanf("%f", &entry);

    //yrs = days / 365, weeks = days / 7, days = days
    printf("%.2f Years\n", entry / 365);
    printf("%.2f Weeks\n", entry / 7);
    printf("%.2f Days\n", entry);
    printf("%.2f Hours\n", entry * 24);
    printf("%.2f Minutes\n", entry * 1440);
    printf("%.2f Seconds", entry * 86400);
}