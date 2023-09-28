#include<iostream>
using namespace std;

void add(int n1, int n2);
void sub(int n1, int n2);
void multiply(int n1, int n2);
void divide(float n1, float n2);

main()
{
	int n1, n2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>n1;

	cout<<"Enter 2nd number: ";
	cin>>n2;

	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;
	
	if(op=='+')
{
	add(n1,n2);
}
	if(op=='-')
{
	sub(n1,n2);
}
	if(op=='*')
{
	multiply(n1,n2);
}
	if(op=='/')
{
	divide(n1,n2);
}
}

void add(int n1, int n2)
{	int sum;
	sum=n1+n2;
	cout<<"Addition: "<<sum;
}

void sub(int n1, int n2)
{	int subtract;
	subtract=n1-n2;
	cout<<"Subtraction: "<<subtract;
}

void multiply(int n1, int n2)
{	int multi;
	multi=n1*n2;
	cout<<"Multiplication: "<<multi;
}

void divide(float n1, float n2)
{	float div;
	div=n1/n2;
	cout<<"Division: "<<div;
}