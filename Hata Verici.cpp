#include <stdio.h>
void HATA(int hata){
    printf("Hata kodu %d",hata);
}
int main(){
int sayı;
printf("Alinin kaç elması var?: ");
scanf("%d",&sayı);
if (sayı<0){

        HATA(1);
}
else{
    printf("Tamamdır");
}






    return 0;
}