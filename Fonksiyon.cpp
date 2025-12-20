#include <stdio.h>
int Faktoriyel(int sayı){
int sonuç=1;
    for(;sayı>0;sayı--){
     sonuç *= sayı;
    }
   return sonuç;
}




int main() {
int n;
printf("Sayıyı Gir: ");
scanf("%d",&n);
printf("%d",Faktoriyel(n));

    return 0;
}