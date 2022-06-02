//Insert an element at first position of an array
#include<stdio.h>
int main()
{
  int pr[20];
  int i,size,ele;
  //collecting the size position and element
  printf("Enter the size of an array(Max-20)\n");
  scanf("%d",&size);
  printf("Enter an element u want to insert in array\n");
  scanf("%d",&ele);
     for(i=0;i<size;i++) 
	{
     printf("Enter the %d position  value \n",i);
     scanf("%d",&pr[i]);
    }
//Shifting
    for(i=size-1;i>=0;i--)
        {
	  pr[i+1]=pr[i];
        }
//insert now
       pr[0]=ele;

//increase size
     size++;
    printf("After inserting one new element we get \n");
       for(i=0;i<size;i++)
       {
       	printf("The %d position value is=%d\n",i,pr[i]);
	   }
	return 0;
}

