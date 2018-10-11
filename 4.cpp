//first include the libray
#include <iostream>
using namespace std;
//writing the recursion
int sum(int a){
	if(a==0){
	return 0;
	}
	else{
	return a+sum(a-1);
	}
}

//writing the main function
int main(){
	int a;
	cout<<"Give me a number"<<endl;
	cin>>a;
	cout<<"The sum of the numbers from 1 and "<<a<<" is "<<sum(a)<<endl;
return 0;
}

