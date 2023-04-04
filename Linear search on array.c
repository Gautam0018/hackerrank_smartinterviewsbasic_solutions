#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k,flag=0;
    scanf("%d %d",&n,&k);
    int ar[n];
    for(int i=0; i<n; i++){
    scanf("%d",&ar[i]);
    if(ar[i]==k){
        flag=1;
        printf("%d",i);
    }
    }
    if(flag==0)
        printf("-1");
    
    
return 0;
}
