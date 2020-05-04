#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main(){


	int t;
	cin >> t;
	// 
	while(t--){

		int n;string country;
		cin >> n >> country;
		long long int num_points = 0;
		while(n--){
			string val;
			cin >> val;
			if(val == "CONTEST_WON"){
				int rank;
				cin >> rank;
				int rp = 0;
				if( rank <= 20) rp = 20-rank;
				num_points += 300 + rp;
			}else if( val == "TOP_CONTRIBUTOR"){
				num_points += 300;
			}else if( val == "BUG_FOUND"){
				int severity;
				cin >> severity;
				num_points += severity;
			}else{
				num_points += 50;
			}
		}

		if( country == "INDIAN"){
			cout << num_points/200 << endl;	
		}else{
			cout << num_points/400 << endl;
		}

	}


	return 0;

}
