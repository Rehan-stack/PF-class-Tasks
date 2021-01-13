#include<iostream>
using namespace std;
int main()
{
int num1 = 2, num2 = 3;
int*pt1, *pt2;
int sum;

pt1 = &num1;
pt2 = &num2;

sum = *pt1+*pt2;
cout<<sum;
	
}
