#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){


	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> A;
		for(int i  = 0; i < n; i++){
			int val;	
			cin >> val;
			A.push_back(val);
		}


		int max_speed = A[0];
		int num_cars = 1;

		for( int i = 1; i< A.size(); i++){
			if( A[i] <= max_speed){
                                max_speed = A[i];
				num_cars += 1;
			}
		}

		cout << num_cars << endl;

	}

	return 0;

}
				
