#include <iostream>
using namespace std;
int main() {
int age;
cin>>age;
cout<<"what is your age"<<endl;
switch (age)
{
case 18:
cout<<"age is 18"<<endl;
break;
case 20:
cout<<"age is greater than 18"<<endl;
break;
default:
cout<<"no special cases";
}
return 0;
}
