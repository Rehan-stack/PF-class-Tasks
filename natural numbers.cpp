#include<iostream>
using namespace std;

int main()
{
int num, i;
cout<<"enter a number: ";
cin>>num;
if(num>0)
{
	for(i=1; i<=num;i++)
	cout<<i;
}else
cout<<"invalid number";

return 0;

}
