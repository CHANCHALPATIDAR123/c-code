#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"\n enter two number:";
	cin>>a;
	cin>>b;
	try{
		if(b!=0){
			c=a/b;
                              	cout<<"Division="<<c;	
		}else{
			throw(b);
		}
	}
	catch(int b){
		cout<<"Division By:"<<b<<"Error";
	}

	return 0;
}
