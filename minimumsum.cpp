#include<iostream>
#include<bits/stdc++.h>
#include <cstdlib> 
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int c=0;
 for(int i=0;i<n;i++){
     cin>>a[i];
     if(a[i]<0){
         c++;
     }
 }
 int d,e;
 int min=INT_MAX;
 sort(a,a+n);
 for(int i=0;i<c;i++){
     for(int j=c;j<n;j++ ){
         if(a[i]+a[j]<min){
              min=a[i]+a[j];
              d=i;
              e=j;
         }
     }
 }
 cout<<a[d]<<a[e];
 
    return 0;
    
    
}
