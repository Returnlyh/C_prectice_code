#include <stdio.h>

int main()
{
    // int a = 11543;
    int b[] = {1, 2, 3, 4};
    int *p = &b;
    int* p[], int (*p)[];
    printf("%d\n", *p);
    printf("%p\n", p);
    printf("%d\n", p[0]);
    // printf("%d\n", *(p+3));
    printf("%d\n", p[3]);
    printf("%d\n", sizeof(p));

    
    // char i = 'a',y = 'c';
    // printf("%c\n", *&i);
    // printf("%d\n", i);
    // printf("%p\n", &i);
    // printf("%d\n", y);
    // printf("%p\n", &y);
    // int b = 97,c = 99;
    // printf("%p\n", &b); 
    // printf("%p\n", &c);
}