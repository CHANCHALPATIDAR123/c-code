#include<iostream>
using namespace std;
class A{
	protected:
		int no;
		public:
			void getno(){
				cout<<"enter the number:";
				cin>>no;
			}
};
class B:public A{
	public:
		void square(){
			cout<<"squre of the number:"<<(no*no);
		}
};
class C:public A{
	public:
		void cube(){
			cout<<"cube of the number"<<(no*no*no);
		}
};
int main(){
	B bobj;
	C cobj;
	bobj.getno();
	bobj.square();
	cobj.getno();
	cobj.cube();
	return 0;
}

