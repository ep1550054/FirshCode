#include<conio.h>
#include<stdio.h>

int main()
{
	int first,last,n,search,mid;
	printf("Enter Size = ");
	scanf("%d",&n);
	last=n-1;
	first=0;
	int array[n-1];
	printf("\n\tEnter Values\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\n\n\n.........The values are inserted type any value to search in binary search..........\n\n\n\n");
	scanf("%d",&search);
	
	while(first <= last )
	{
		mid=(first+last)/2;
		if(array[mid] == search)
		{
			printf("%d is at location %d",array[mid],mid+1);
			break;
		}
		else if(array[mid] < search)
		{
			first=mid+1;
		}
		
		else if(array[mid] > search)
		{
			last=mid-1;
		}
			
	}
	if (first > last)
      printf("Not found! %d isn't present in the list.\n", search);
	return 0;
}
