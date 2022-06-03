//Deletion in array--
//Deleting an element at the first position of the array

#include<stdio.h>
int main()
{
  int pr[20],i,size;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
    for(i=0;i<size;i++)
    {
    	printf("Enter %d loaction value of the array\n",i);
        scanf("%d",&pr[i]);
  
	}
	
	//Shifting(Backword)
	for(i=0;i<=size;i++)
	{
		pr[i]=pr[i+1];
	}
	//decresing the size
	size--;
	printf("After deleting the element from the 1st position of  the array\n");
	for(i=0;i<size;i++)
	{
		printf("The %d location value is %d\n",i,pr[i]);
	}
	return 0;
}

