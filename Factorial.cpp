#include<iostream>
using namespace std;
// function 
int factorial(int numb){
	int result = 1;
		for(int i=1;i<=numb;i++){        
		result*=i;
		}
 	return result;
}

int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	if(num<0){
		cout<<"\nInvalid; negative numbers don't have a factorial";
	}
	else{
		cout<<"The factorial of "<<num<<" is "<<factorial(num);
	}
   
    return 0;
}