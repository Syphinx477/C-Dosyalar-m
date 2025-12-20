#include <stdio.h>

int uzunluk_bulucu(char ad[]){
    int i;
    int uzunluk = 0;
    for(i=0;ad[i]!='\0';i++){
        uzunluk++;


    }


    return uzunluk;
}
int main(){
char isim[] ="Mustafa";
printf("%d",uzunluk_bulucu(isim));
// Strlen









    return 0;
}