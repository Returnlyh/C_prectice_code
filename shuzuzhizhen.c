#include <stdio.h>

int main()
{

        int temp[5][1]= {1,2,3,4,5};
        // int a = temp;
        int (*p2)[5] = &temp;

        // int *c = (int *)p2;
        // printf("c:%d\n", c);

        int i;

        printf("temp: %p\n", temp);
        printf("&temp: %p\n", &temp);
        printf("&temp[0]: %p\n", &temp[0]);
        // printf("a: %p\n", a);
        // printf("&a: %p\n", &a);

        for (i=1; i<2; i++)
        {
            printf("*p2: %p\n", *p2);
            printf("*p2 + i: %p\n", *p2 + i);
            printf("**p2: %d\n", **p2);
            printf("**p2 + i: %d\n", **p2 + i);
            printf("*(*p2 + i): %d\n", *(*p2 + i));
            printf("******\n");
        }
    
    return 0;
}
// A这里如果我们写的是p2 + i,那么根据地址的步长----p2存放的是数组的地址,那么步长就是整个数组的步长
// B那么我们p2 + i就去到了一个不是这个数组的地址,而且得到的还是一个地址,不是值
// C因此我们先取出p2的值,它的值是数组的首地址(不是首元素的地址哦,虽然值一样,但意义不同,处理方式也不同)
// D那么 *p2 + i 在这个地址上加几就是几,不会受到步长的影响
// E然后我们在括号外再加一个 * 号,取出这个地址所代表的值.


/*
type (*p)[] = &temp;

数组指针：
|*变量*  | *存放地址* |     *内容*    | 
|p      |   不 知    |   temp的地址  |
|temp   | temp的地址 |   首元素地址   |

1.数组指针p：表示数组，步长为数组宽度;
2.*p：表示取p内容的值，即temp的内容，即首元素地址。表示元素，步长为元素宽度;
3.**p：表示首元素地址的值，即第一个元素，表示元素的值;
4.可以把*p视作指向数组首元素var的变量指针，即：
|*变量*  | *存放地址* |     *内容*    | 
|*p     |   不 知    |   var的地址   |
|var    |  var的地址 |    var的值    |
5.一维数组可以视为只有一列的二维数组 temp[5] = temp[5][1];
*/

/*
type *p = &var;

变量指针：
|*变量*  | *存放地址* |     *内容*    | 
|p      |   不 知    |   var的地址   |
|var    |  var的地址 |    var的值    |

*/