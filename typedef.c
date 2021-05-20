#include <stdio.h>

typedef struct
{
    int age;
    char firstname[100];
    char lastname[100];
}student;

student one;

int main(void){
    printf("Type in your first name: \n");
    scanf("%s", one.firstname); //only first name cuz im a dumbo
    printf("Type in your last name: \n");
    scanf("%s", one.lastname);
    printf("Type in your age\n");
    scanf("%i", &one.age);

    printf("\nName: %s %s\nAge: %i", one.firstname, one.lastname, one.age);
}

