#include <stdio.h>
#include <string.h>
int main(){
    FILE *filep;
    char text[256];
    filep = fopen("NeoDummy.txt","a");

if(filep == NULL){
    printf("Dosya Oluşturulamadı");
}
else{
    printf("Bişey yaz ");
    fgets(text,256,stdin);
    fputs(text,filep);
    printf("Dosya yazıldı");
    fclose(filep);
}





    return 0;
}