#include<iostream>
using namespace std;
int main ()
{
	int n;
	int i = 5;
	cout<<"Enter a non-negative integer";
	cin >>n;
	
	while (i>0)
	{
		--i;
		cout << i <<endl;
		cout<<"The integer you entered is positive."<<endl;
		cout<<"Enter a non-negative integer: ";
		cin >> n;
	}
}
