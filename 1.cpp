//first include the library
#include <iostream>
using namespace std;
//write the recursion
int sub(int a,int b){
	if(b==0){
		return 1;	
	}
	else{
		return a*sub(a,b-1);
	}
}
//write the main function
int main(){
	int a,b;
	cout<<"give me a number"<<endl;
	cin>>a;
	cout<<"give me the power of the number"<<endl;
	cin>>b;
	cout<<a<<"^"<<b<<"="<<sub(a,b)<<endl;
return 0;
}
