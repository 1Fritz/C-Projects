#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a,b,c;
	double discriminant, root1, root2;
	cout<<"Enter the values of a, b and c\n";
	cin>>a>>b>>c;
	//cout<<a<<"X^2 + "<<b<<"X + "<<c<<" = 0\n";
	if(a==0){
		cout<<"This is not a quadratic";
	}
	else{
		discriminant = (b*b)-(4*a*c);
		if(discriminant>0){
			root1=(-b+sqrt(discriminant))/(2*a);
			root2=(-b-sqrt(discriminant))/(2*a);
			cout<<" Roots are real and distinct\n";
			cout<<"Root 1="<<root1<<"\nRoot 2="<<root2;
		}
		else if(discriminant==0){
			root1=(-b)/(2*a);
			cout<<"Roots are real and equal"<<"\nRoot= "<<root1;
		}
		else{
			cout<<"Roots are complex";
		}
		
	}
	return 0;
}