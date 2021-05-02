#include<iostream>
using namespace std;

int main()
{
	int angle1,angle2,angle3;
	
	cout<<"Enter the three angles 1 of triangle:";
	cin>>angle1;
	
	cout<<"Enter the three angles 2 of triangle:";
	cin>>angle2;
	
	cout<<"Enter the three angles 3x of triangle:";
	cin>>angle3;

	if (angle1+angle2+angle3==180)
		cout<<"Triangle is valid";
	else
		cout<<"Triangle is not valid";

	
	return 0;
}
 
 
 
