#include <stdio.h>
int asdf(int m)
{
  int n;
  n=m*m;
  return n;
}
int qwer(int a,int b,int c)
  {
    int p =(a +b +c)/3;
    
    int f =(asdf(a-p)+asdf(b-p)+asdf(c-p))/3;
    int zh = 3*p-f/3;
    return zh;
  }


int  zxcv(int j,int k,int l)
  {   if (j >= k && k >= l) 
      {printf("小明 > 小强 > 小林");} 
      else if (j >= l && l>= k) 
      {printf("小明 > 小林 > 小强");} 
      else if (k >= j && j >= l) 
      {printf("小强 > 小明 > 小林");} 
      else if (k >= l && l >= j) 
      {printf("小强 > 小林 > 小明");} 
      else if (l >= j && j >= k) 
      {printf("小林 > 小明 > 小强");} 
      else 
      { 
      printf("小林 > 小强 > 小明");
      }
    
    }
int main()
{
  int x1, x2, x3;
  int y1, y2, y3;
  int z1, z2, z3;

  printf("请输入小明的三项成绩(顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &x1, &x2, &x3);
  printf("请输入小强的三项成绩(顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &y1, &y2, &y3);
  printf("请输入小林的三项成绩(顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &z1, &z2, &z3);
  
  int zh1,zh2,zh3;
  zh1 = qwer(x1,x2,x3);
  zh2 = qwer(y1,y2,y3);
  zh3 = qwer(z1,z2,z3);
  
  zxcv(zh1,zh2,zh3);
  return 0;
}  