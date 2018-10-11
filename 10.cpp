//first include the libray
#include <iostream>
using namespace std;
//writing the recursion
int fib(int a,int b,int c,int d){
	int e=b+c;
	if(a<d){
		a++;
		e=fib(a,e,b,d);
	}
	else
		return e;
}


// Writing the main function
int main(){
	int a,b,c,d;
	a=1;
	b=0;
	c=1;
	cout<<"Give me a number"<<endl;
	cin>>d;
	cout<<"The "<<d<<"th fibonacci number is"<<fib(a,b,c,d)<<endl;
return 0;
}
