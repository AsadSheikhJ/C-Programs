#include <iostream>
using namespace std;
void check(int array[], int n)
{
	int largest= array[0],i;
	for ( i=1; i<n;i++)
	{
		if (largest<array[i])
		{
			largest=array[i];
		}
	}
	
	cout<<endl<<largest<<"   Is the Largest Value"<<endl;
	
}
int main ()
{
	int n;
	cout<<"Enter The Limit of Index : ";
	cin>>n;cout<<endl;
	
	int array[n];
	for (int i=0; i<n;i++)
	{
		cout<<"Enter The Value for Index "<<i<<endl;
		cin>>array[i];
	}	
	check (array, n);
	return 0;
}