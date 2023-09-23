#include<iostream>
using namespace std;
int main()
{
int A[5],sum=0;
cout<<"Enter the element of array :";
for(int i=0;i<5;i++)
{
    cin>>A[i];
}
for(auto x:A)
{
    sum+=x;
}
cout<<"The sum of array is:"<<sum;
return 0;
}