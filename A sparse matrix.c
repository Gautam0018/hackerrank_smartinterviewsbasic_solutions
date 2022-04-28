#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
                count++;
        }
    }
    if(count > (m*n)/2)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
