#include <stdio.h>

int main(){
    float m, u, r, x;

    printf("Zadej udaje v tomto poradi (oddelene mezerou): penize, urok, roky\n");
    scanf("%f %f %f", &m, &u, &r);

    if (m < 0 || u < 0 || r < 0){
        printf("Chybny udaj, zkuste to znovu");
        return 0;}

    for (int i = 0; i < r; i++){
        x = (u / 100) * m;
        m += x;}
    
    printf("%.2f\n", m);
}
