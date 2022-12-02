#include <stdio.h>

int main()
{
    char a = 'F';
    int f = 123;

    char *pa = &a;
    int *pb = &f;

    printf("a = %c\n", *pa);
    printf("f = %d\n", *pb);

    *pa = 'C';
    *pb += 1;

    printf("now, a = %c\n", *pa);
    printf("now, f = %d\n", *pb);

    printf("sizeof pa = %lu\n", sizeof(pa));
    printf("sizeof pb = %lu\n", sizeof(pb));

    printf("the address of a is: %p\n", pa);
    printf("the address of f is: %p\n", pb);

    printf("%p\n", pa);
    printf("%p\n", pb);

}