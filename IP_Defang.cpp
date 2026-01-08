#include <stdio.h>
#include <string.h>
void defangIPaddr(char* adres);


int main(){

char address[30];
fgets(address,16,stdin);//get the address



defangIPaddr(address);
printf( "%s",address);
 return 0;
}


void defangIPaddr(char * adres)
{

int len = strlen(adres);
for(int i=0;i<len+6;)
    {
if(adres[i]=='.')
{
for(int j=len;j!=i;j--){ adres[j+2] = adres[j];}//move each element two positions right

    
adres[i] = '[';
adres[i+1] = '.';
adres[i+2] = ']';

i= i+2;
len= len+2;//update the length
}
else{i++;}



    } 
}