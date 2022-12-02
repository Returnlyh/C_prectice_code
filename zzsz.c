#include <stdio.h>
#include <string.h>


int main()
{
    int i, s;
    char *p1[20];
    char site[] = "RUNAGErgba";
    
    
    for (i=0; i<strlen(site); i++)
    {
        printf("%c\n", site[i]);
        printf("%p\n", &site[i]);
        p1[i] = &site[i];
    }
    
    printf("\n");
    for (s=0; s<20; s++)
    {
    printf("%c\n", *p1[s]);
    printf("%p\n", p1[s]);
    }
    
}