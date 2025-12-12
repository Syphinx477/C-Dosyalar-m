#include <stdio.h>
int sec(int curr,int goal){
    int temp;
    if(curr<goal){
    temp = goal;
    }
    else{
    temp = curr;
    }
    return temp;
}
int main(){
int n;
scanf("%d",&n);
int l = 2*n-1;
int i,j;
int a=n;
int flag=a;
int a1 = n;
int flag1 = a1;
for(i=0;i<l;i++){
    if(flag1>=2){
        for(j=0;j<l;j++){
        

        if(flag>=2){
            printf("%d ",sec(a,a1));
            a--;
            flag=a;
        }
        else{
            printf("%d ",sec(a,a1));
            a++;
        }
    
    }
    a1--;
    flag1 = a1;
    }
    else{
    for(j=0;j<l;j++){
        

        if(flag>=2){
            printf("%d ",sec(a,a1));
            a--;
            flag=a;
        }
        else{
            printf("%d ",sec(a,a1));
            a++;
        }
    
    }
    a1++;
    }
    printf("\n");
   a=n;
   flag=a;
}





    return 0;
}