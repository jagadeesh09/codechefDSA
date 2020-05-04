#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main(){


	int t;
	cin >> t;
	while(t--){
		string S;
		cin >> S;
		int n = S.length();
		int freq[26] = {0};
		for(int i = 0 ; i < n/2; i++ ){
			freq[S[i] - 'a']++;
		}
                int min_index;
		if( n %2 == 0 ){
			min_index = n/2;
		}else{
			min_index = (n/2) + 1;
		}

		for(int i = n-1; i >= min_index; i--){
			freq[S[i]-'a']--;
		}

		int check = 0;
		for(int i = 0; i < 26; i++){
			if(freq[i] != 0){
				check = 1;
				break;
			}
		}
		if( check == 1 ){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}

	return 0;

}

		

		
