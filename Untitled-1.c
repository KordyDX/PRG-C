#include <stdio.h>
#define Pi 3.14159265359

float deg2rad(float deg)
{
    return (deg / 180.) * Pi;
}

float rad2deg(float rad){
    return (rad * 180) / Pi;
}


int main(){
    float deg, rad = 1.4;
    scanf("%f", &deg);

    printf("%.4f\n", deg2rad(deg));
    printf("%.4f", rad2deg(rad));
}