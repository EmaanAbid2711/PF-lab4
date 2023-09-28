#include<iostream>
using namespace std;

void length(int l1);

main()
{
	cout<<"Enter the side length of the Rubik's Cube: ";
	int a;
	cin>>a;

	length( a );
}

void length(int l1)
{
	int result;
	result=l1*l1*6;
	cout<<"Number of stickers needed: "<<result;
}