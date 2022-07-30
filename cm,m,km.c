#include<stdio.h>
#include<stdlib.h>
int main()
{
float n;
system("");
printf("Enter length in cm\n");
scanf("%f",&n);
printf("%f is the meter %f\n",n, .01);
scanf("%f",&n);
printf("%f is the kilometer %f\n",n, .00001*n);
scanf("%f",&n);
getch();
}