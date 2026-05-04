/*add two numbers
#include<stdio.h>
int main()
{
    int a=20;
    int b=30;
    int sum=a+b;
    printf("sum of two number is=%d",sum);
    return 0;
}

//swap off two numbers
#include<stdio.h>
int main()
{
  int a,b,temp;
  printf("enter two numbers");
  scanf("%d %d",&a,&b);
  temp=a;
  a=b;
  b=temp;
  printf("after swaping %d %d ",a,b);
  return 0;  
}

// sum of n natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1;
    }
    printf("sum of n natural number is %d",sum);
    return 0;
}

//even or odd
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("it is even");
    }
    else
    {
        printf("number is odd");
    }
    return 0;
}

//simple interest
#include<stdio.h>
int main()
{
    int p,r,t,si;
    printf("enter principal amount=");
    scanf("%d",&p);
    printf("enter rate=");
    scanf("%d",&r);
    printf("enter time=");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("simple interest is=%d",si);
    return 0;
}*/

//factorial of a number
#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("enter a number");
    scanf("%d",num);
    for(i=1;i<=num;i++);
    {
        fact=fact*i;
    }
    printf("factorial of a number is %d",fact);
    return 0;

}