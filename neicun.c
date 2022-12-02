#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i, num;
    int count = 0;
    int *ptr = NULL;

    do
    {
        printf("请输入一个整数（输入-1表示结束）：");
        scanf("%d", &num);
        count++;

        ptr = (int *)realloc(ptr, count*sizeof(int));
        if (ptr == NULL)
        {
            exit(1);
        }

        ptr[count-1] = num;
    } while (num != -1);
    
    printf("输入的整数分别是：");
    for (i=0; i<count; i++)
    {
        printf("%d ", ptr[i]);
    }
    putchar('\n');

    free(ptr);

    return 0;
}


// int main(void)
// {
//     int *ptr1 = NULL;
//     int *ptr2 = NULL;

//     //第一次申请的内存空间 
//     ptr1 = (int *)malloc(10*sizeof(int));

//     // 进行若干操作之后发现ptr1申请的内存空间竟然不够用！

//     // 第二次申请的内存空间
//     ptr2 = (int *)malloc(20*sizeof(int));

//     // 将1的数据拷贝到2中
//     memcpy(ptr2, ptr1, 10);
//     free(ptr1);

//     // 对ptr2申请的内存空间进行若干操作！

//     free(ptr2);

//     return 0;
// }



/*
下面两种写法是等价的
calloc()分配内存空间并初始化：
    int *ptr = (int *)calloc(8, sizeof(int));
malloc()分配内存空间并用memset()初始化：
    int *ptr = (int *)malloc(8*sizeof(int));
    memset(ptr, 0, 8*sizeof(int));
*/

/*
realloc是在原来的内存上后面如果还足够空间的话就会在原来基础后面扩增，返回的还是原来的地址
如果原来基础后面不够的话，会另外新申请一个空间，并将数据转移过去，返回新的地址
*/