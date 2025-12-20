#include <stdio.h>
#include <stdlib.h> // A
#include <string.h>
int main(){



int num, *arr, i;  //tip belirler
    scanf("%d", &num); //arrayın boyutunu ister
    arr = (int*) malloc(num * sizeof(int));
/*   1      2     3      4      5
1:

'n' - '0' == n (integer)
*/
char *s;
    s = (char*) malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = (char*) realloc(s, strlen(s) + 1);




char matris[5][5];
    memset(matris, 'X', sizeof(matris));
    return 0;
}