#include <stdio.h>
struct Araba{
    char İsim[15];
    int tekerleksayısı;
    int vitessayısı;
    int model;
    float motor;
    int beygir;
}araba1;
int main(){
araba1 = {"M",4,6,2025,3.0,300};
printf("%s %d %d %d %.2f %d",araba1.İsim,araba1.tekerleksayısı,araba1.vitessayısı,araba1.model,araba1.motor,araba1.beygir);






    return 0;
}