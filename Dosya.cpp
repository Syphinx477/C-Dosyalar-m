#include <stdio.h>
int main(){

FILE *filep = fopen("Selam.txt","r");
if(filep == NULL){
    printf("Dosya Oluşturulamadı");
}
else{
    //filep == *Dosyanın Adresi*
    printf("Dosya oluşturuldu");
}
/*
Modlar:
w: Ada sahip dosyaya yazar. Yoksa açar
r: Ada sahip dosyayı okur. Yoksa NULL
a: Ada sahip dosyayı değiştirmemizi sağlar.Yoksa NULL
w+: Hem yazma Hem okuma(Bazı fark var)
r+: Hem yazma Hem okuma(Bazı fark var)
a+: Hem yazma Hem okuma(Bazı fark var)
*/
    return 0;
}