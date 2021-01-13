#include <iostream>
using namespace std;
int main()
{
    int num1, b = 0;
 
	cout << " Input a number  ";
	cin>> num1;	
    for (int a = 1; a <= num1; a++) 
    {
        if (num1 % a == 0) 
        {
            b++;
        }
    }
    if (b == 2) 
    {
        cout << " The entered number is a prime number. \n";
    }
    else {
        cout << " The number you entered is not a prime number. \n";
    }
}
