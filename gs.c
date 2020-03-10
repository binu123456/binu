#include<stdio.h>
int main ()
{
float basic,da,gross_salary;
printf("enter the basic salary :");
scanf("%f",&basic);
da=basic*20/100;
gross_salary=basic+da;
printf("DA=%f\nGROSS salary=%f",da,gross_salary);
}
