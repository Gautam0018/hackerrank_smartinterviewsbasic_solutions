#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    int ar[n];
    for(int i=0; i<n; i++){
    scanf("%d",&ar[i]);
    if(ar[i]==k)
        count++;
    }
    if(count>0)
        printf("true");
    else
        printf("false");
    return 0;
}
