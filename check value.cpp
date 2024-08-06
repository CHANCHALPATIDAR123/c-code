#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter the value of ch:"<<endl;
	cin>>ch;
	if(ch>='A' && ch<='Z')
	{
		cout<<"value is uppercase"<<endl;
	}
	else if(ch>='a' && ch<='z')
	{
		cout<<"value is lowercase"<<endl;
	}
	else
	      cout<<"value is numeric";
}
