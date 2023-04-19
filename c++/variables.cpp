#include <iostream>
using namespace std;
int c=45;
int main() {
	int a,b,c;
cout<<"enter value of a"<<endl;
cin>>a;
cout<<"enter value of b"<<endl;
cin>>b;
c=a+b;
cout<<c<<endl;
cout<<"value of global c:"<<::c; //scope resolution operator
	return 0;
}
