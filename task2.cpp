#include<iostream>
using namespace std;

void inch(float inches);

main()
{
	cout<<"Enter the measurement in inches: ";
	float in;
	cin>> in;

	inch(in);
}

void inch(float inches)
{
	float result;
	result=inches/12;
	cout<<"Equivalent in feet: "<<result;
}