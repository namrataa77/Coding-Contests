#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int x;
	int s1 = 0, s2 = 0;
	cin>>x;
	int A[x][2];
	for(int i=0; i<x;i++){
	    for(int j=0; j<2; j++){
	        cin>>A[i][j];
	    }
	}
	
	for(int i=0; i<x;i++){
	    for(int j=0; j<4; j++){
            
	        if(j<2) {
            if(A[i][1]>=A[i][0]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            }
            
	}
    }
	return 0;
}
