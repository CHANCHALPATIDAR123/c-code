#include<iostream>
using namespace std;
class demo{
	int a,b;
	public:
	    demo(){
	    	a=10;
		b=20;
	    }	
	void putdata();
};
void demo::putdata(){
	cout<<"a="<<a<<endl<<"b="<<b;
}
int main(){
	demo aa,bb;
	//aa.demo();
	aa.putdata();
	
	bb.putdata();
	return 0;
}
