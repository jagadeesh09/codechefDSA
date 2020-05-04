#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main(){

	int t;
	cin >> t;
	while(t--){

		int val;
		cin >> val;
		long long int start = 5;
		long long int counter = 0;
		while( val / start != 0){
			int num = val;
			int quo = num / start;
			counter = counter + quo;
			start = start * 5;
		}


		cout << counter << endl;

	}

	return 0;

}

	
