#include <stdio.h>

void get_array(int e[]);

void get_array(int e[10])
{
    printf("sizeof e: %p\n", e);
    printf("sizeof e: %d\n", *e);
    printf("sizeof e: %d\n", sizeof(e));
}

int main()
{
    int c[10] = {1,2,3,4,5,6,7,8,9,0};
    int (*p)[] = &c;
    
    // get_array(c);
    printf("sizeof p: %p\n",  p);
    printf("sizeof *p: %p\n",  *p);
    printf("sizeof *p+1: %p\n",  (*p+1));
    printf("sizeof *(*p+1): %d\n",  *(*p+1));

    printf("sizeof c: %p\n",  (c+0));
    printf("sizeof c+1: %p\n",  (c+1));
    printf("sizeof c+2: %p\n",  (c+2));
    printf("sizeof c+3: %p\n",  (c+3));
    // printf("sizeof c: %d\n", *c);
    // printf("sizeof c: %d\n", sizeof(c));
}