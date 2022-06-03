//Deletion in array--
//Deleting an element at any specified  position of the array
//Hhere shiftig is not required bcz we are deleting at the alst position
#include<stdio.h>
int main()
{
  int pr[20],i,size,pos;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Enter the position u want delete that position element from the array\n");
  scanf("%d",&pos);
    for(i=0;i<=size;i++)
    {
    	printf("Enter %d loaction value of the array\n",i);
        scanf("%d",&pr[i]);
  
	}
	
	//Shifting(Backword)
	for(i=pos;i<size;i++)
	{
		pr[i]=pr[i+1];
	}
	//decresing the size
	size--;
	printf("After deleting the element from any position of  the array\n");
	for(i=0;i<=size;i++)
	{
		printf("The %d location value is %d\n",i,pr[i]);
	}
	return 0;
}

