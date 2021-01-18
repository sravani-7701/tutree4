#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x,y;
    cin>>x;
    cin>>y;
        int m=INT_MAX;
       int k=-1;
           for(int i=0 ; i<n ; i++) { 

           if(a[i]==x || a[i]==y) { 
            if( k != -1 && a[i] != a[k])  {
                m = min(m , i-k);
            }
           else{    
            k=i; 
           }
        } 
    }
    cout<<m;
    return 0;

    
}
