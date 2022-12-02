#include <stdio.h>

int main()
{
    char a = 0,b = 0;
    int *p = (int *)&b;
    // printf("%p\n", &a);
    printf("%p\n", &b);
    
    // *p = 126;
    *p = 258;
    printf("%p\n", &b);
    
    printf("%d %d\n", a,b);

    return 0;
}