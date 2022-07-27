#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	int A[3];
    int min = 0;
    
    
	for(int i = 0; i<x; i++){
        
	    for(int j = 0; j<3; j++){
        
	    cin>>A[j];

	    if(j == 2){
            min  = A[0];
            for(int i = 0; i<2; i++){
                if(A[i] < min ) min  = A[j];
                cout<<"min are :"<<min<<" ";
            }
            cout<<"fmin "<<min<<endl;
	        if((A[0] == A[1] && A[0] == min) || (A[1] == A[2] && A[1] == min) || (A[2] == A[0] && A[2] == min ) )
            {
                
                cout<<"YES"<<endl;
            }
	            
	        else cout<<"NO"<<endl;
	        }
            min = 0;
            
	    }
	}
	return 0;
}
