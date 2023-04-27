#include <iostream>
using namespace std;
int main() {
int a=45;
float b=45.46;
//type casting->convertion of one data type to other data type
cout<<"the value of a is"<<float(a)<<endl;
cout<<"the value of b is"<<(int)b<<endl;
cout<<a+b<<endl;
cout<<a+int(b)<<endl;
cout<<a+(int)b;
return 0;
}
