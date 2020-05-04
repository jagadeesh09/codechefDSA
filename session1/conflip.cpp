#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		int g;
		cin >> g;
		while(g--){
			int i, n, q;
			cin >> i >> n >> q;
			int quo = n/2;
                        
			if( i == 1 ){
				if( q == 1 && n % 2 == 0 ){
					cout << quo << endl;
				}else if(q == 1 && n % 2 != 0){
					cout << quo << endl;
				}else if(q == 2 && n % 2 == 0){
					cout << quo << endl;
				}else if( q == 2 && n % 2 != 0){
					cout << quo + 1 << endl;
				}
			}else{
								
				if( q == 2 && n % 2 == 0 ){
					cout << quo << endl;
				}else if(q == 2 && n % 2 != 0){
					cout << quo << endl;
				}else if(q == 1 && n % 2 == 0){
					cout << quo << endl;
				}else if( q == 1 && n % 2 != 0){
					cout << quo + 1 << endl;
				}
			}


		}

	}

	return 0;

}
				
