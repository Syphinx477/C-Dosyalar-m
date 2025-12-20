#include <stdio.h>
#include <stdbool.h>
void bubblesort(int array[],int uzunluk){
bool flag;
int i,temp;
for(;uzunluk>0;uzunluk--){
      for (i=1;i<uzunluk;i++){
        if(array[i-1]>array[(i)]){
            temp = array[i-1];
            array[i-1] = array[i];
            array[i] = temp;
        }
     }
  }
}




int main(){
int sayılar [5] = {5,58,16,2,72};
bubblesort(sayılar,5);
int j;
for(j=0;j<5;j++){

    printf("%d ",sayılar[j]);
}









    return 0;
}