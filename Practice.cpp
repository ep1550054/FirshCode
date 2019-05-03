#include <iostream>
using namespace std;

int main()
{
//	int a[5]={3,2,5,9,4};
//	for	(int i=0; i<5; i++)
//	{
//		cout<<"[" << a[i]<<"]  ";
//	}
//	int max=a[0],l=0;
//	for	(int i=0; i<5; i++)
//	{
//		if(a[i] > max)
//		{
//			max=a[i];
//			l=i;
//		}
//	}
//	cout<<max<<" location "<<l;
	

	int a[5] = {3,2,5,9,4};
	int b[5];
	for (int i=0; i<=5; i++)
	{
		for(int j=0; j<=5; j++)
		{
			if (a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	for (int i=0; i<=5; i++)
	{
		cout<<a[i]<<"\n";
	}

	return 0;
}

void findMax()
{
	int a[5]={4,6,3,9,2};
	int max=a[0],l=0;
	for(int i=0; i<5; i++)
	{
		if(a[i] > max)
		{
			l++;
			max=a[i];
		}
	}
	cout<<max;
	
}
