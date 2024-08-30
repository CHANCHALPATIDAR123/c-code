#include<iostream>
using namespace std;
class integer{
	int *X;
	int *Y;
	
	public:
		integer(){
			
		}
		
		integer(int x,int y){
			*X=x;
			*Y=y;
		}
		void add(){
			int sum=*X+*Y;
			cout<<"\n sum is="<<sum;
		}
};

int main(){
	integer j(10,20);
	j.add();
	return 0;
	}
