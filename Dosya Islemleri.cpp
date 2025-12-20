#include <stdio.h>
#include <string.h>
int main(){
    char veri[25] = "I Love Yazılım";
    int uzunluk = strlen(veri);
    int i;
    FILE *filep = fopen("Dummy.txt","w");

if(filep == NULL){
    printf("Dosya Oluşturulamadı");
}
else {
for(i=0;i<uzunluk;i++){

    fputc(veri[i],filep);
    printf("Yazılan Karakter:%c\n",veri[i]);
}
printf("Dosya Başarıyla Yazıldı ");
fclose(filep);
};




    return 0;
}