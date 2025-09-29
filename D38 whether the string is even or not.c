#include <stdio.h>
#include <string.h>
int main(){
    char str[34];
printf("Enter a string: ");
    gets(str);
    if(strlen(str)%2==0)
        printf("The string is even");
    else {printf("The string is odd");
    }

        }
