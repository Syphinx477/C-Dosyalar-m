#include <stdio.h>
int main(){
    int toplam=0;
    int i,sayı;    

    for (i=0; true;i++){
        printf("Sayıyı gir;(Çıkış için -1)");
        scanf("%d",&sayı);
        if(sayı == -1){
            break;

        }
        toplam =+ sayı;
    }
    printf("%d",toplam);





    return 0;
}