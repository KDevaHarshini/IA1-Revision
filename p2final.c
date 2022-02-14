#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  int largest;
  if((a>b)&&(a>c))
  printf("A is big\n");
  else if((b>a)&&(b>c))
  printf("B is big\n");
  else
  printf("C is big\n");
}
void output(int a,int b,int c,int largest)
{
  printf("The large number is %d\n",largest);
}
int main()
{
  int a,b,c,largest;
  a = input();
  b = input();
  c = input();
  largest = cmp(a,b,c);
  return 0;
}