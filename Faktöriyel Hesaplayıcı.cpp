#include <stdio.h>
int main() {
    int x;
    int y= 1;
    printf("Sayıyı gir\n");
    scanf("%d",&x);
    while(x!=0) {
        y=y*x;
        x--;
    }
    printf("Cevap:%d",y);
    return 0;
}