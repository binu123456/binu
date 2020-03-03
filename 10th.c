#include<stdio.h>
int main()
{
int num1,num2,temp;
printf("input the first and second no\n");
scanf("%d%d",&num1,&num2);
printf("the original keyed numbers num1=%d and num2=%d\n",num1,num2);
temp=num1;
num1=num2;
num2=temp;
printf("the swapped numbers num1=%d %d\n",num1,num2);
}


