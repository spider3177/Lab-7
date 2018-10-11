//first include the libray
#include <iostream>
using namespace std;
//writing the recursion
int fac(int a){
	if(a==0){
		return 1;
	}
	else{
		return a*fac(a-1);
	}
}

// Writing the main function
int main(){
	int a;	
	cout<<"Give me a number"<<endl;N
	cin>>a;
	cout<<"The factorial of "<<a<<" is "<<fac(a)<<endl;
return 0;
}
