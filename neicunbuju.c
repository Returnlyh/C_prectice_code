#include <stdio.h>
#include <stdlib.h>

int global_unint_var;
int global_init_var1 = 520;
int global_init_var2 = 880;

void func(void);

void func(void)
{
    ;
}

int main(void)
{
    int local_var1;
    int local_var2;

    static int static_uninit_var;
    static int static_init_var = 456;

    char *str1 = "i love fishc.com";
    char *str2 = "you are right!";

    int *malloc_var = (int *)malloc(sizeof(int));

    printf("address of func --> %p\n", func); 
    printf("address of str1--> %p\n", str1); 
    printf("address of str2--> %p\n", str2); 
    printf("address of global_init_var1--> %p\n", &global_init_var1); 
    printf("address of global_init_var2--> %p\n", &global_init_var2); 
    printf("address of static_init_var--> %p\n", &static_init_var); 
    printf("address of static_uninit_var--> %p\n", &static_uninit_var); 
    printf("address of malloc_var--> %p\n", malloc_var); 
    printf("address of local_var1--> %p\n", &local_var1); 
    printf("address of local_var2--> %p\n", &local_var2); 

    return 0;
}