#include<stdio.h>
int main()
{ 
int a=20,b=10,temp;
temp=a;
a=b;
b=temp;

printf("value of A : %d \n",a);
printf("value of B : %d \n",b);
return 0;
}
