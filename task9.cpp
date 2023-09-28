#include<iostream>
using namespace std;

void fuelNeeded(float distance);

main()
{	cout<<"Enter the distance: ";
	float distance;
	cin>> distance;

	fuelNeeded(distance);

}
void fuelNeeded(float distance)
{	float result;
	result=distance*10;
	

	if(result > 100)
	{	cout<<"Fuel needed: "<<result;	};

	if(result < 100)
	{	cout<<"Fuel needed: 100";	};
}