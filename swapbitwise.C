#include<stdio.h>
int main()
{
int i=65,k=125;
printf("The value of before swapping is %d and %d\n",i,k);
i=i^k;
k=i^k;
i=i^k;
printf("The value of after swapping is %d  and %d\n",i,k);
return 0;
}
