#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   char a[200];
    scanf("%s",a);
    int c=0,lth=0;
    lth=strlen(a);
    for(int i=0; i<lth; i++){
        if(a[i]>='0'&& a[i]<='9'){
            c++;
        }
    }
    if(c==lth)
        printf("Yes");
    else
        printf("No");
    return 0;
}
