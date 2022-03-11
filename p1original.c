#include<stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("enter the numerator 1 and 2,denominator 1 and 2\n");
  scanf("%d %d %d %d",num1,den1,num2,den2);
}
int gcd(int a,int b)
{
  int t;
  while(b!=0)
    {
      t=b;
      b=a%b;
      a=t;
    }
  return a;
}
void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{
  *num3=num1*den2+num2*den1;
  *den3=den1*den2;
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
  printf("the sum of the 2 fractions is %d/%d",num3,den3);
}
int main()
{
  int num1,num2,num3,den1,den2,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
  }
