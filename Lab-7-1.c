#include <stdio.h>
#define string_length 100
int main()
{
    char string[string_length]= "computer";
    char *p= string;
    for(int i= 0; string[i]!='\0'; i++ )
    {
        printf("%c", *p);
        p+= 2;
    }
return 0;
}
