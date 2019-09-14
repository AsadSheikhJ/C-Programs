#include <iostream>
using namespace std;
#include <string>
void display_alp(string  alp )
{
	int n;
	n=alp.size();
	for (int i=0;i<n;i++)
	{
		cout<<alp[i]<<"   ";
	}
}
int main ()
{
	int n;
	cout<<"Enter The Limit Of the Array : ";
	cin>>n;cout<<endl;
	
	char alp[n];
	for (int i=0;i<n;i++)
	{
		cout<<"Enter The Character For Index  "<<i<<endl;
		cin>>alp[i];
	}
	display_alp(alp);
	
	return 0;
}