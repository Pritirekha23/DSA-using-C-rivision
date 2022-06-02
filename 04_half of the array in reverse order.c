
//half of the array in reverse order
#include<stdio.h>
int main()
{
int priti[6]={7,8,9,6,5,2},i,mid;
   mid=(0+6)/2;
   printf("Half of the array in reverse order\n");
   for(i=5;i>mid;--i)
   {
   	printf("%d\n",priti[i]);
   }
	return 0;
}

