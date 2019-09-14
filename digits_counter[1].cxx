#include <iostream>
using namespace std;
int main()
{
	int n,counter=0;
	cout<<"Enter Any number"<<endl;
	cin>>n;
	while (n>0 || n<0)
	{
		n=n/10;
		counter++;
		
		
		
		
	}
	
	cout<<"number of digits"<<counter;
	return 0;
	
	
}