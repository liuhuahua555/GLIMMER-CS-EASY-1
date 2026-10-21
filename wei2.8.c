#include <stdio.h>
#include <stdbool.h>
#define N 100010
int e[N],ne[N];
int h  = 0;
int id = 0;
int mp[N];
//头插
void push_front(int n)
{
  id++;
  e[id] =n;
  mp[n]= id;  
  ne[id]=ne[h];
  ne[h]=id;
}   
//尾插
void push_back(int n)
{
    int q=h;
    while (ne[q]!=0)
    {
        q = ne[q];
    }
    id++;
    e[id] = n;
    mp[n] = id;
    ne[id]= 0;
    ne[q] = id;
}
//打印
void print()
{
    for(int i =ne[h];i;i=ne[i])
    {
        printf("%d ",e[i]);
    }
    printf("\n\n");
}
//查找
void find (int x)
{
    for(int i = ne[h];i != 0;i = ne[i])
    {
        if(e[i]==x)
        {
            mp[x]= i;  
            printf("%d\n",mp[x]);
            return ;
        }   
          
    }
    printf("false\n");
}
//添加
void insert(int p ,int x)
{
     if (p)
     {
        id++;
        e[id]=x;
        mp[x]=id;
        ne[id]=ne[p];
        ne[p]=id;

     }

}
//删除n位
void erase (int q)
{
    if (ne[q])
    {
        mp[e[ne[q]]]=0;
        ne[q]=ne[ne[q]];
    }
}
//判断是否存在n位,定位n-1位
bool deleteNode(int n)
{
    if (n<=0)
    {
    return false;
    }
    int q = h;
    for(int i =1;i<n&&ne[q] !=0;i++)
    {
        q = ne[q];
    }
    if (q == 0)
    return false;
    if (ne[q] == 0)
    return false;
    erase(q);
    return true;


}
//反转
void reverseList()
{
    int prev = 0;
    int curr = ne[h];
    while (curr!=0)
    {
        int nextTemp = ne[curr];
        ne[curr]=prev;
        prev = curr;
        curr =nextTemp;
    }
    ne[h]=prev;
}
//主函数
int main ()
{
    for(int j= 1;j<= 5;j++)
    {
        push_front(j);
        print();
    }
    insert(1,7);
    print();
    insert(2,3);
    print();
    find(1);
    find(2);
    find(3);
    find(4);
    find(7);
    deleteNode(3);
    print();
    reverseList();
    print();
    
    
    
    return 0;
}
