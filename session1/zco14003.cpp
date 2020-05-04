#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){


	int n;
	vector<int> A;
	cin >> n;
	while(n--){
		int val;
		cin >> val;
		A.push_back(val);
	}

	sort(A.begin(), A.end());
	long long int max_rev = INT_MIN;
	for(int i = 0; i < A.size(); i++){
		long long rev = A[i] * ( A.size() - i);
		if( rev > max_rev ){
			max_rev = rev;
		}
	}

	cout << max_rev << endl;

	return 0;

}
		
