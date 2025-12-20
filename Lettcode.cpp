#include <stdio.h>
int struct sayılar{
    int a0;
    int b0;
}sayı;
sayı bulucu(int array[],int lenght,int target){
int i,j;
sayı sonuc;
int a,b;
for(i=0;i<lenght;i++){
    for(j=i;j<lenght;j++){
        if(array[i]+array[j]==target){
            i = a;
            j = b;
            break;
        }

    }
}
sayı.a0 = a;
sayı.b0 = b;
return sonuc;


}






int main(){
int hedef;
printf("Hedefi gir");
scanf("%d",&hedef);
int uzunluk;
printf("Uzunluğu gir");
scanf("%d",&uzunluk);
int sıra[uzunluk];
int l;
for(l=0;l<uzunluk;l++){
scanf("%d",&sıra[l]);
}
printf("%d %d ",bulucu(sıra,uzunluk,hedef));




    return 0;
}