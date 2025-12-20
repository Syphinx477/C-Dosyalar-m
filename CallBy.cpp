#include <stdio.h>
void değiştir(int *a,int *b){
int c = *a;
*a = *b;
*b= c;
}
//tanımlanan fonksiyonlardakı değişkenler işlem bitince silinir
int main(){
    int x = 5,y = 10;
    değiştir(&x,&y);
    printf("x:%d y:%d",x,y);
    return 0;
}