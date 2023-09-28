#include<iostream>
using namespace std;
void calculatePayableAmount(string a, float b);

main()
{
string day;
float amount;
cout<<"Enter the day of purchase: ";
cin>>day;
cout<<"Enter the total purchase amount: $";
cin>>amount;
calculatePayableAmount(day, amount);

}

void calculatePayableAmount(string a, float b)

{
if(a=="Sunday")
	{b=b-(b*0.1);
	cout<<"Payable Amount: $"<<b;}

else
	cout<<"Payable Amount: $"<<b;

}