//first include the libray
#include <iostream>
using namespace std;
//writing the recursion
int rev(int a){
	if(a/10!=0){
		cout<<a%10;
		return rev(a/10);
	}
	else
		return a;
}



// Writing the main function
int main(){
	int a;	
	cout<<"Give me a number"<<endl;
	cin>>a;
	cout<<"The reverse of this number is "<<rev(a)<<endl;
return 0;
}
