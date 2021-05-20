#include <stdio.h>

int lucas(int n){
    if (n==0){
        return 2;
    }
    if (n==1){
        return 1;
    }
    int celk = lucas(n-1) + lucas(n-2);
    return celk;
}

int main(){
    printf("%i", lucas(20));
    return 0;
}