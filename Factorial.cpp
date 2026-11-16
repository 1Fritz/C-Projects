#include<iostream>
using namespace std;
int main(){
	int num, result=1;
	cout<<"Enter a number: ";
	cin>>num;
	if(num<0){
		cout<<"\nInvalid; negative numbers don't have a factorial";
	}
	else{
	for(int i=1;i<=num;i++){         //fast method
		result*=i;
	}
/*	for(int i=num; i>=1; i--){        //Slow method: wastes memory time
		result*=i;
	}*/
   
    cout<<"The factorial of "<<num<<" is "<<result;
 }
    return 0;
}