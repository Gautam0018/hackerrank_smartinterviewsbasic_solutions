#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count=0;
    char str[100];
    gets(str);
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='A'|| str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
    }
        if(count==strlen(str))
            printf("Yes");
        else 
            printf("No");
    
    return 0;
}
