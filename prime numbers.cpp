#include<iostream>
 
using namespace std;
 
int main()
{
	int a;
	int b;
	int count=1;
	int c=0;

	
	for(a=3;a>0;++a)
	{
		for(b=2;b<=a/2;++b)
		{
			if(a%b==0){
				c=1;
				break;
			}
		}
		
		if(c==0)
		{
			cout<<a<<endl;
			count++;
		}
		
		c=0;
		if(count==10)
			break;
	}
 
	return 0;
}
