
#include <iostream>
using namespace std;
int main() {
	int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
arr[i]={2};
cout<<"arr"<<i<<arr[i]<<endl;
}
	return 0;
}
//output is
//arr02
//arr12
//arr22
//arr32
