#include <stdio.h>
int main()
{
    int  W,L;
    scanf("%d%d",&W,&L);
    for(int i=1; i<=L; i++){
        for(int j=1; j<=W; j++){
            if( i==1 ||  i==L ||  j==1 ||  j==W){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
