#include<iostream>
using namespace std;

void Number(int num);

main()
{
	cout<<"Enter a number: ";
	int num;
	cin>>num;
	
	Number(num);

}

void Number(int num)
{
	if(num%2 == 0)
{	cout<<"Number "<<num<<" is even";	}

	if(num%2 == 1)
{	cout<<"Number "<<num<<" is odd";	}
}