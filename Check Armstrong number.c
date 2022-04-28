#include<stdio.h>
int main(){
    int n,n1,sum=0,rem;
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        rem = n%10;
        sum= sum+(rem*rem*rem);
        n= n/10;
    }
    if(n1==sum)
        printf("Yes");
     else
         printf("No");
        
}
