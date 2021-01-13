#include<iostream>
using namespace std;
int main()
{
    int num;
	 int num2;
	 int num3= 1;
    cout<<"Enter a number: ";
    cin>>num;
    while(num != 0)
    {
        num2 = num % 10; 
        num3 *= num2; 
        num /=  10;  
    }
    cout<< num3;
    return 0;
}
