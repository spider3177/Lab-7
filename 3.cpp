//first include the libray
#include <iostream>
using namespace std;
//writing the recursion
int sub(int a,int b){
	if(a<b){
		if(a%2==0){
			cout<<a<<endl;
			sub(a+1,b);
		}
		else{
			sub(a+1,b);
		}
	}
	else if(b<a){
		if(b%2==0){
			cout<<b<<endl;
			sub(a,b+1);
		}
		else{
			sub(a,b+1);
		}
	}
}

int kay(int a,int b){
	if(a<b){
		if(a%2==1){
			cout<<a<<endl;
			kay(a+1,b);
		}
		else{
			kay(a+1,b);
		}
	}
	else if(b<a){
		if(b%2==1){
			cout<<b<<endl;
			kay(a,b+1);
		}
		else{
			kay(a,b+1);
		}
	} 
}


// Writing the main function
int main(){
	int a,b,c,d;
	cout<<"Give me two numbers"<<endl;
	cin>>a>>b;
	if(a==b){
	cout<<"Data invalid"<<endl;
	}
	else if(a<b){
	cout<<"The even numbers between "<<a<<" and "<<b<<" are:-"<<endl;
	sub(a,b);
	cout<<"The odd numbers between "<<a<<"  and "<<b<<" are:-"<<endl;
	kay(a,b);
	}
	else if(b<a){
	cout<<"The even numbers between "<<a<<" and "<<b<<" are:-"<<endl;
	sub(a,b);
	cout<<"The odd numbers between "<<a<<"  and "<<b<<" are:-"<<endl;
	kay(a,b);
	}
return 0;
}
