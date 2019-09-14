#include <iostream>
using namespace std;
int main()
{
	int n,counter=0;
	cout<<"Enter Any number"<<endl;
	cin>>n;
	
	int check1=n;
	while (check1>0 || check1<0)
	{
		check1=check1/10;
		counter++;
	}
	 int check2 =n;
	  int a = n,b=0;
	  cout<<endl<<"The Reverse Value is : ";
      while (b!=counter-1)
    {
        check2=check2%10;
        cout<<check2;
        a=a/10;
        check2=a;
        b++;   
    }
    cout<<a<<endl<<endl;
	cout<<"number of digits  :"<<counter;
	return 0;	
}