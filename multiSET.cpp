#include<bits/stdc++.h>
using namespace std;

int main(){
	
	multiset<int>mst1;
	// - multiset vs set
		// - same as set, difference : dupulicates are allowd in multiset
		
	mst1.insert(10);
	mst1.insert(10);
	mst1.insert(20);
	mst1.insert(30);
	mst1.insert(40);
	
	//op of set -> {10 20 30 40};
	//op of multiset->{10 10 20 30 40}
	
	//deletion 
	// *Note* -> if we want to delete an element
	// if its set -> there will be single frequency
	// but its multiple frequency is in multiset
	
	
	// mst1.erase(1); // this will delete every occurance of this 1;
	
	//delete only single frequency of 1 -> we use iterator
	// we use this 
	mst1.erase(mst1.find(1)); // This will erase the specific occurance
	
	//printing
	for(auto i:mst1)cout<< i<<" ";
	cout << endl;

	//variatons of multiset

	multiset<pair<int,int>>mst2;
	multiset<vector<int>>mst3;
	
	
	// Unordered_set
		// - same as set, but the order can be anything
		// - back implemented using Hashtable
		// - 
	
	unordered_set<int> st1;
	st1.insert(1);
	st1.insert(2);
	st1.insert(3);
	
	for(auto i:st1)cout << i <<" ";
	cout << endl;
	
	//deletion 
	// - Cant erase using value, always have to use iterator 
	// - because values are not mapped due to hashtables
	
	st1.erase(st1.find(1));
	
	for(auto i:st1)cout << i <<" ";
	cout << endl;

	//other functions - size(), empty(), clear(), etc.
	
	return 0;
}