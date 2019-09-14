#include <iostream>
using namespace std;
int main ()
{
	int n,sqaure;
	
	cout<<"Enter Any Number for its Square : "<<endl;
	cin>>n;cout<<endl;
	
	for (int i =1; sqaure<n ;i++)
	{
		sqaure= i*i;
		cout<<sqaure<<"  value of  "<<i<<endl;
		
	}
	
	return 0;
}