#include <iostream>
#include <math.h>
using namespace std;
void prime(int x, int m)
{
	if(x==1)
		cout<<"no";
	else if(x==2)
		cout<<"yes";
	else if(x%2==0)
		cout<<"no";
	else
	for(int i=3;i<=m;i+=2)
		if(x%i==0)
		{
			cout<<"no";
			return;
		}
    cout<<"yes";
}
int main()
{
	int x;
	cin>>x;
    int m=sqrt(x);
    prime(x,m);
}