#include <stdio.h>
int asal_mi(int sayı) {
    int i,sonuç;
    sonuç = -5;
    for(i=2;i<sayı;i++){
        if(sayı%i==0){
            sonuç=0;
            
        }
        
    }
    if(sonuç == -5){
        sonuç = 1;
    }
    return sonuç;


}
int main() {
    int n;
    printf("sayıyı yaz: (1:Asal 0:Asal değil) ");
    scanf("%d",&n);
    if(asal_mi(n) == 1){
        printf("Sayı asal");
    }
    else{
        printf("Asal değil");
    }



    return 0;
}