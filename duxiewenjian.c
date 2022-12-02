#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    FILE *fp;

    if ((fp = fopen("hello.txt", "w")) == NULL)
    {
        printf("文件打开失败！\n");
        exit(EXIT_FAILURE);
    }

    // 获取文件位置指示器的值（当前的读写位置）
    printf("%ld\n", ftell(fp));
    fputc('F', fp);
    printf("%ld\n", ftell(fp));
    fputs("ishC\n", fp);
    printf("%ld\n", ftell(fp));

    //rewind函数可以将位置指示器移动到文件头的位置，也就是位置为0的地方,此时插入数据会直接覆盖原始数据
    rewind(fp);
    fputs("He", fp);


    fclose(fp);

    return 0;
}
   // fseek函数用于设置文件流的位置指示器，也就是将位置指示器移动到文件中的任意位置
    // 在fseektool.c文件里演示