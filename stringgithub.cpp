#include<iostream>
using namespace std;

int main()
{
	string s;
	int a,b;
	
	cout<<"Enter a Website Name:\t";
	cin>>s;
	
	cout<<"\n\Website is:"<<s;
	
	cout<<"\n\nRequired Domain Name is:";
	
	for( a=4; s[a] !='.';a++)
	cout<<s[a];
}
