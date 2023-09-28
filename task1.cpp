#include<iostream>
using namespace std;

void CalculateFuel(float distance);

main()
{
	cout<<"Enter the distance: ";
	float dis;
	cin>>dis;

	CalculateFuel(dis);
	
}
void CalculateFuel(float distance)
{
	float fuel;
	fuel=distance*10;
	cout<<"Fuel needed: "<<fuel;

}