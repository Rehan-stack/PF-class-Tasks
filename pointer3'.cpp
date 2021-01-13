#include<iostream>
using namspace std;
int main(){

	int array[4];
	int i;
	
	int*pt1;
	pt1 = array;
	
	for(int i=0; i<4; i++){
		cin>>array[i];
		
	}

	for(int j=0; j<4;j++)
	{
		cout<<*pt1;
		pt1++;
	}
	
}
