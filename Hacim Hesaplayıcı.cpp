#include <stdio.h>
#define PI 3.14

int main () {
    float r;
    float V;
printf("Yarıçap giriniz:");
scanf("%f",&r);
V = (r*r*r)*PI*(4/3.0);
   
printf("%s\n%.2f","Kürenin Hacmi:",V);


return 0;
}