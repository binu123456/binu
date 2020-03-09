
#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the values of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
if(a>c&&a>b)
printf("a\n");
else
if(b>a&&b>c)
printf("b\n");
else
printf("c\n");
}
