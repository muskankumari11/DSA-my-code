#include <iostream>
using namespace std;
void printarray(int arr[],int n)
{
for(int i=0;i<n;i++)
cout<<arr[i];
}
int main() {
int third[12]={1,2};
int n=12;
printarray(third,12);
}
