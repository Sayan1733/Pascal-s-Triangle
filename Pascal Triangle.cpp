#include <iostream>
#include <conio.h>

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

using namespace std;
int fact(int n)						// Function for factorial
{
	int factorial=1;
	
	for(int i=1;i<=n;i++)
	{
		factorial*=i;
	}
	return factorial;
}
int main()
{
	int a;										//Taking User Input for Row Number
	cout<<"Enter the row number:";
	cin>>a;
	
	for(int i=0;i<a;i++)						//Using outer loop for row
	{
		for(int j=0;j<=i;j++)					//using inner loop for intialize the numbers inside triangle
		{
			cout<<fact(i)/(fact(j)*fact(i-j))<<" ";				//call function
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
