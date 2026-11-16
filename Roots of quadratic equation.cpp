#include<iostream>
#include<cmath>
using namespace std;
//function declaration
void roots(float a,float b,float c){
	float discriminant, root1, root2;
	discriminant = (b*b)-(4*a*c);
	if(discriminant>0){
			root1=(-b+sqrt(discriminant))/(2*a);
			root2=(-b-sqrt(discriminant))/(2*a);
			cout<<"\n Roots are real and distinct\n";
			cout<<"Root 1 = "<<root1<<"\nRoot 2 = "<<root2;
		}
		else if(discriminant==0){
			root1=(-b)/(2*a);
			cout<<"\n Roots are real and equal."<<"\nRoot = "<<root1;
		}
		else{
			cout<<"\n Roots are complex.\n";
			cout<<"Real part = "<<(-b)/(2*a)
			<<"\nImaginary part = "<<sqrt(-discriminant)/(2*a)<<"i"<<endl;
		}
	
}

int main(){
	float a,b,c;
	cout<<"Enter the coefficient of x^2: ";
	cin>>a;
	if(a==0){
		cout<<"This is not a quadratic";
		return 0;
	}
	cout<<"Enter the coefficient of x: ";
	cin>>b;
	cout<<"Enter the constant term: ";
	cin>>c;
	roots(a,b,c);
	
	return 0;
}