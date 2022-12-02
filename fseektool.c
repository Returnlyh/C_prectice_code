#include <stdio.h>
#include <stdlib.h>

#define N 2

struct Student
{
    char name[12];
    int num;
    float score;
}stu[N], sb;

int main(void)
{
    FILE *fp;
    int i;

    if ((fp = fopen("sorce.txt", "w")) == NULL)
    {
        printf("文件打开失败!\n");
        exit(EXIT_FAILURE);
    }

    for (i=0; i<N; i++)
    {
        printf("请录入第%d位同学的成绩信息（格式：姓名 排名 成绩）：", i+1);
        scanf("%s%d%f", stu[i].name, &stu[i].num, &stu[i].score);
    }

    fwrite(stu, sizeof(struct Student), N, fp);
    fclose(fp);

    if ((fp = fopen("sorce.txt", "r")) == NULL)
    {
        printf("文件打开失败!\n");
        exit(EXIT_FAILURE);
    }

    fseek(fp, sizeof(struct Student), SEEK_SET);
    fread(&sb, sizeof(struct Student), 1, fp);
    printf("%s(%d)的成绩是：%.2f\n", sb.name, sb.num, sb.score);

    fclose(fp);

    return 0;
}