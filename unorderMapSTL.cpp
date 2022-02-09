#include<bits/stdc++.h>
using namespace std;

int main(){
	
	unordered_map<int,int>mp;
	
	//unordered  - random 
		// - implementd using hashtables;
		// - complexity O(1) for searching,inserting, etc;
		// - in worst case O(n);
	
	mp.insert({1,2});
	mp.insert({2,2});
	mp.insert({3,2});
	mp.insert({4,2});
	
	for(auto i:mp){
		cout << i.first << " " << i.second << endl;
	}
	
	cout << endl;
	
	// multi maps
	
	multimap<int,int>mp1;
	// - duplicate keys can exists unlike map where there is unique keys
	
	mp1.insert({1,2});
	mp1.insert({2,2});
	mp1.insert({2,2});
	mp1.insert({4,2});
	
	mp1.erase(2);
	// here there are multiple values so all values will be deleted
	// so use iterator here instead of direct values;
	
	for(auto i:mp1){
		cout << i.first << " " << i.second << endl;
	}
	
	multimap<int,int> :: iterator it1,it2;
	pair<int,int> p = mp1.equal_range(1);
	
	//equal_range = a special function;
	
	
	for(auto i:mp1){
		cout << i.first << " " << i.second << endl;
	}
}