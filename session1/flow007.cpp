#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){

		int n;
		cin >> n;
                int new_val = 0;
		while(n){

			int rem = n % 10;
			//cout << rem ;
                        if( rem != 0 || new_val != 0){
				new_val = new_val * 10 + rem;
			}

			n = n / 10;

		}
		cout << new_val << endl;
	}

	return 0;

}
