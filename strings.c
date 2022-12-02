#include <stdio.h>
#include <string.h>


int main()
{
    char str1[] = "which is mother?";
    char str2[] = "nothing to you fly!comfort and joy";
    char str3[20];

    strcpy(str1, str2);
    // strcpy(str2, str1);

    printf("str2: %s\n", str2);
    printf("str1: %s\n", str1);

}   