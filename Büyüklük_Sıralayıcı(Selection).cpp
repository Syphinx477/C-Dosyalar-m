#include <stdio.h>
void selection_sort(int array[],int uzunluk){
int min;
int i,j;
    for(i=0;i<uzunluk;i++){
        min = i;
        for(j=i;j<uzunluk;j++){
            if(array[j]<array[min]){
              min = j;
            }
        }
      int temp = array[i];
      array[i] = array[min];
      array[min] = temp;
    }
}

int main(){
int sayılar[5] = {8,44,7,10,101};
int i;
selection_sort(sayılar,5);
for(i=0;i<5;i++){
printf("%d ",sayılar[i]);
 }




    return 0;
}