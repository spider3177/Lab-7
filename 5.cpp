//first include the libray
#include <iostream>
using namespace std;
//writing the recursion
int sub(int a,int b){
	if(a<b){
		if(a%2==0){
			return a+sub(a+2,b);
		}
		else{
			return sub(a+1,b);
		}
	}
	else{
		if(b%2==0)
			return b;
		else
			return 0;
	}
}

int kay(int a,int b){
	if(a<b){
		if(a%2==1){
			return a+kay(a+2,b);
		}
		else{
			return kay(a+1,b);
		}
	}
	else{
		if(b%2==0)
			return 0;
		else
			return b;
	}
}

// Writing the main function
int main(){
	int a,b;
	cout<<"Give me two numbers"<<endl;
	cin>>a>>b;
	if(a==b){
	cout<<"The sum is "<<a<<endl;
	}
	else if(a<b){
	cout<<"The sum of even numbers in the range "<<a<<" and "<<b<<" is = "<<sub(a,b)<<endl;
	cout<<"The sum of odd numbers in the range "<<a<<" and "<<b<<" is = "<<kay(a,b)<<endl;
	}
	else if(b<a){
	cout<<"The sum of even numbers in the range "<<a<<" and "<<b<<" is = "<<sub(b,a)<<endl;
	cout<<"The sum of odd numbers in the range "<<a<<" and "<<b<<" is = "<<kay(b,a)<<endl;
	}
return 0;
}
