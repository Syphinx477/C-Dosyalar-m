#include <stdio.h>
int maks_bulucu(int *sayılar2,int uzunluk){
    int i;
    int maks = sayılar2[0];

    for(i=0;i<uzunluk;i++){
        if(sayılar2[i]> maks){
            maks = sayılar2[i];
        }
    }
    return maks;
}

int main(){
int sayılar[5] = {3,4,54,7,99};
printf("%d",maks_bulucu(sayılar,5));



    
    return 0;
}