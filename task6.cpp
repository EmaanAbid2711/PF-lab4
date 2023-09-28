#include<iostream>
using namespace std;

void test(int score);

main()
{
	cout<<"Enter your score: ";
	int score;
	cin>>score;

	test(score);
}

void test(int score)
{
	if(score > 50)
{	cout<<"Pass";	}

	if(score <= 50)
{	cout<<"Fail";	}
}