#include <iostream>
using namespace std;

int main()
{
	/*
	int no[5];
	printf("%d\n",&no);
	int *p;
	//printf("%d\n",p);
	p=no;
	printf("%d\n",p);
	//*(p+2)
	//printf("%d\n",p);
	//p=no+2;
	*p=10;
	printf("%d\n",no[0]);
	*(p+3)=20;
	printf("%d\n",no[3]);
	*/
	
	
	/*	Insert Item at last
	,1,3,5,7,8};
	int i=0;
	for(i=0; i<10; i++)
	{
		if(i == 9)
		{
			a[i]=10;
			cout<<a[i]<<"\n";
		}
	}
	for(i=0; i<10; i++)
	{
		cout<<a[i]<<"\n""";
		
	}
	*/
	
	
	
	/*
		Insert Item at index 3
		
	
	
	
	int a[]={1,3,5,7,8};
	cout<<"Original Array";
	for(int i=0; i<5; i++)
	{
		cout<<a[i]<<"\n""";
		
	}
	
	cout<<"Updated Array";
	int n=5,j=n,index=3;
	while(j >= index)
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[index]=10;
	for(int i=0; i<6; i++)
	{
		cout<<a[i]<<"\n""";
		
	}
	*/
	
	/*
		Delete Item at index 3
	
	int a[]={1,3,5,7,8};
	cout<<"Original Array\n";
	for(int i=0; i<5; i++)
	{
		cout<<a[i]<<"\n""";
		
	}
	cout<<"Updated Array after delete\n";
	//working
	int index=3,n=5,j=index;
	
	while( j < n)
	{
		//a[j]=a[j+1];
		a[j-1]=a[j];
		j=j+1;
	}
	for(int i=0; i<4; i++)
	{
		cout<<a[i]<<"\n";
		
	}
	*/
	
	
	
	/*
		Search Item = 5 in an Array
	
	int a[]={1,3,5,7,8};
	cout<<"Original Array\n";
	for(int i=0; i<5; i++)
	{
		cout<<a[i]<<"\n""";
		
	}
	cout<<"Search Array\n";
	//working
	int item=5,n=5;
	int j=0;
	while( j < n)
	{
		if( a[j] == item )
		{
			break;
		}
		j=j+1;
	}
	cout<<"Location ="<<j+1<<" Item ="<<a[j];
	*/
	
	/*
		Update 5 to 10 in an Array
	*/
	int a[]={1,3,5,7,8};
	cout<<"Original Array\n";
	for(int i=0; i<5; i++)
	{
		cout<<a[i]<<"\n""";
		
	}
	cout<<"Updated Array\n";
	int index=2,j=index,update=10,n=5;
	while(j < n)
	{
		if(a[j] == 5)
		{
			a[j]=update;
		}
		j=j+1;
	}
	for(int i=0; i<5; i++)
	{
		cout<<a[i]<<"\n";
		
	}
	return 0;
}


