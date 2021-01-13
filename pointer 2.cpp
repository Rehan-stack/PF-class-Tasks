#include<iostream>
using namespace std;
pointersswap(int*x, int*y)
{
	int swap;
	swap = *x;
	*x =*y;
	*y = swap;
}
int main()
{
int x =3, y =4;

pointersswap(&x,&y);

	cout<<x<<"and y = "<<y;
}
