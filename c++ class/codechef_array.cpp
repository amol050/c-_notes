#include <iostream>
using namespace std;
int main(){
   int sum=0,n,s,p,i;
   int a[11] ={0}; // mtlb sare zero
// done some changes for scm projec
   for(int j=0; j<n; j++){
       cin>>p>>s;
     //  a[p]=s;
       if(a[p]<s){
           a[p]=s;
       }
   }
   for(int k=0; k<9; k++){
       sum=sum+a[k];
   }
   cout<<sum<<endl;
}
