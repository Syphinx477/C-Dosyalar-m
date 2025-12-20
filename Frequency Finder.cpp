#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char *str;
int i,j;
int array[10] = {0,0,0,0,0,0,0,0,0,0};
str = (char*) malloc(1024* sizeof(char));
scanf("%s", str);
for(i=0;i<strlen(str);i++){
    if(*(str + i)-'0'>=0 && *(str + i)-'0'<=9){
        int sayi = *(str + i) - '0';
        array[sayi]++;
    }

}
for(i=0;i<10;i++){
    printf("%d ",array[i]);
}





free(str);
str = NULL;
return 0;
}