#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int x;
	cin>>x;
	int A[x][2];
	int res = 0;
	for(int i=0; i<x;i++){
	    for(int j=0; j<2; j++){
	        cin>>A[i][j];
	    }
	}
	for(int i=0; i<x;i++){
	    for(int j=0; j<2; j++){
	        int N = A[i][0];
	        int M = A[i][1];
	        res = 0;
	        
	        if(j==1){
	            int a = 0, b = 0;
	            a = N%2;
	            b = M%2;
	            if(N == 1 || M == 1){
	                res = M*N;
	                cout<<res<<endl;
	            }
	            else {
    	            if(a!=0){
    	                
    	                res = res + (a*M);
    	                
    	            }
    	            if(b!=0){
    	                
    	                res = res + (b*N);
    	                
    	            }
	            
	            
	            cout<<res<<endl; } 
	        }
	        
	        
	    }
	}
	
}