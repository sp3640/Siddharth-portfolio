#include <iostream>
using namespace std;
int main()
{
 int T,t;
 cin>>T;
 //cout<<T;
 for(t=0;t<T;t++){
 int i,n;
 cin>>n;
 //cout<<n<<endl;
 int a[n];
 for(i=0;i<n;i++){
 cin>>a[i];
 }
 //for(i=0;i<n;i++)
 // cout<<a[i]<<" ";
 //cout<<endl;
 int count=0;
 for(i=1;i<n-1;i++){
 if(a[i-1]<a[i] && a[i]>a[i+1])
 count++;
 }
 cout<<count<<endl;
 }
return 0;
}