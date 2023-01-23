#include <iostream>
#include<stack>
using namespace std;

int main() {
//creation of stack
stack<int>s;
//insert element
s.push(2);
s.push(3);
//remove element
s.pop();
cout<<"printing top element"<<s.top()<<endl;
if(s.empty())
{
cout<<"stack is empty";
}
else{
cout<<"stack is not empty"<<" "<<endl;
}
cout<<"size of stack is"<<s.size()<<endl;
	return 0;
}
