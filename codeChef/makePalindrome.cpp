#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include <sstream>

using namespace std;



int main() {
	int x;
	cin>>x;
    int c = 0;
	vector<string> S;
	
	
	for(int i=0; i<2*x;i++){
        string a;
        cin>>a;
	    S.push_back(a);
	}
    for(auto t : S){
        c++;
        

        if(c%2 != 0){
            stringstream obj(t);
            int n; obj >> n;
        }
        else {




            c = 0;
        }

    }

	return 0;
}
