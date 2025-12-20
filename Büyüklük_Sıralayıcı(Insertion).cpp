#include <stdio.h>
void insertion_sort(int array[],int uzunluk){
int i,j;
int temp;
for(i=1;i<uzunluk;i++){
temp = array[i];
j= i-1;
while(j>=0 && array[j]> temp){
    array[j+1] = array[j];
    j--;
}
array[j+1] = temp;
}
}
int main(){
int sayılar[5] = {7,8,9,6,5};
int i;
insertion_sort(sayılar,5);
for(i=0;i<5;i++){
printf("%d ",sayılar[i]);
}
return 0;
}