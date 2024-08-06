#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(int x){
			a=x;
			cout<<"A class constructor initilized:";
		}
		void dispa(void){
			cout<<"value of A"<<a;
		}
};
class B
{
	protected:
	int b;
	public:
		B(int y){
			b=y;
			cout<<"B class constructor initialized:";
		}
		void dispb(void){
			cout<<"value of B"<<b;
		}
};
class C:public B,public A{
	int m;
	public:
		C(int x,int y,int z):
			A(x),B(y)
			{
				m=z;
				cout<<"C class constructor initialized";
			}
			void dispm(void){
				cout<<"value of m"<<m;
			}
};

int main(){
	C obj(10,20,30);
	obj.dispa();
	obj.dispb();
	obj.dispm();
	return 0;
}
