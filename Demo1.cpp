#include<bits/stdc.h>
using namespace std;
freeopen() 
freeopen()
void PrintBinary(int n)
{
	for(int i=7;i>=0;i--)
	{
		cout<<(n&(1<<i));
	}
	cout<<endl;
}
int main()
{
	TakeInput();
	int n;
	cin>>n;
	//trick 1
	//check even or odd
	for(int i=0;i<8;i++)
	PrintBinary(i);
    if(n&1)
    {
    	cout<<"Odd";
    }
    else
    {
    	cout<<"even";
    }
    for(char c='A';c<='D';c++)
    {
    	cout<<c<<endl;
        PrintBinary(c);
    }
    for(char x='a';x<='d';x++)
    {
    	cout<<x<<endl;
    	PrintBinary(x);
    }
    char c='a';
    c=c&(~(1<<5));
    //(~(1<<5))--->'_';
    cout<<c;
}