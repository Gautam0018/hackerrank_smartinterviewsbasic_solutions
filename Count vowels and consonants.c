#include <stdio.h>  
int main()  
{  
   int i, vCount = 0, cCount = 0;  
   
       char str[100];
    scanf("%s",str);
   for(i = 0; i < strlen(str); i++){  
       str[i] = tolower(str[i]);  
       if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {  
            vCount++;  
        }  
        else {  
            cCount++;  
        }  
   }  
   printf("%d ", vCount);  
   printf("%d", cCount);  
   return 0;  
}  
