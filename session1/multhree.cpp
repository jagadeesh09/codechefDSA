#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		long long int k, first, second;
		cin >> k >> first >> second;
		long long int sum = first + second;
		int start = 2;
                long long int val = k - 2;
		vector<int> A;
		while(start < k ){
			long long int val = sum % 10;
                        // cout << val << endl;
			A.push_back(val);
			sum += val;
			start++;
                        if(A[0] == val && start != 3 ){	
				break;
			}
		}
		if( sum % 3 == 0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
		cout << sum << endl;
	}

	return 0;

}

		
