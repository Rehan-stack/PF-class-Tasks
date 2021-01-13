#include<iostream>
using namespace std;

int main()
{
	int array[4];
	int array2[4];
	int i;
	
	int*pt1;
	pt1 = array;
	int*pt2;
	pt2=array2;
	int* joint;
	*pt1 = *pt2;
	for(int i=0; i<4; i++){
		cin>>array[i];
		
	}

   	for(int j=0; j<4; j++){
		cout<<*pt1;
		pt1++;
		cout<<endl;
}
pt2 = &array[4];

for(int k=0; k<4; k++){
		cout<<array2[4];
		array2[4]++;
}
	


}
