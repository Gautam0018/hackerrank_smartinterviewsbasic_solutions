#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        for(int j=i; j<=N; j++){
            if(i==1 || j==i || j==N)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
