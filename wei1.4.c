#include <stdio.h>
int main()
{
    char name[100];
    int age,i,j;
    i = 0;
    j = 1;
    for(j;j==1;i++)
    {
    printf("请输入您的名字:");
    scanf("%s",name);
    printf("请输入您的年龄:");
    scanf("%d",&age);
    printf("您的名字是：%s\n",name);
    printf("您的年龄是：%d\n",age);
    printf("是否再次输入(输入为1,不输入为0):");
    scanf("%d",&j);
    }
    printf("共执行了%d次\n",i);
    return 0;

}