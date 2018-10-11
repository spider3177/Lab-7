//first include the libray
#include <iostream>
using namespace std;
//writing the recursion
int pal(int a,int b){
	if(a==0){
		return b;
	}
	else{
		b = (b * 10) + (a % 10);
		return pal(a / 10, b); 
	} 
}



// Writing the main function
int main(){
	int a;	
	cout<<"Give me a number"<<endl;
	cin>>a;
	int b = pal(a,0);
	if(a==b){
		cout<<"It is a palindrome number"<<endl;
	}
	else{
		cout<<"No, it is not a palindrome number"<<endl;
	}
		

return 0;
}


