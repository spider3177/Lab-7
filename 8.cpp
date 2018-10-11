//first include the libray
#include <iostream>
using namespace std;
//writing the recursion
int biz(int a){
	if(a/10!=0){
		int b=a%10;
		return b+biz(a/10);
	}
	else
		return a;
}



// Writing the main function
int main(){
	int a;	
	cout<<"Give me a number"<<endl;
	cin>>a;
	cout<<"The sum of it's digits are "<<biz(a)<<endl;
return 0;
}
