#include<iostream>
using namespace std;
class complex{
	int a;
	int b;
	public:
		complex(){
			a=0;
			b=0;
		}
		complex(int x,int y){
			a=x;
			b=y;
		}
		complex(int x){
			a=x;
			b=0;
		}
		void putdata(){
			cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
		}
};
int main(){
	complex aa(3,4);
	aa.putdata();
	complex bb(5);
	bb.putdata();
	
	complex cc;
	cc.putdata();
	return 0;
}
