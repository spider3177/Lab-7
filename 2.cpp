//first include the libray
#include <iostream>
using namespace std;
int sub(int x,int a){
	if(x<=a){
		cout<<x<<endl;
		sub(x+1,a);
	}
}

int main(){
	int a;
	cout<<"Give me a number"<<endl;
	cin>>a;
	cout<<"The numbers between 1 and "<<a<<" are:-"<<endl;
	sub(1,a);
return 0;
}
