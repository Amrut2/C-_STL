#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// map is a container / declaration
	
	// map<int,int>mp1;
	// unordered_map<int,int>mp3;
	// multimap<int,int>mp2;
	// unordered_multimap<int,int>mp4;
	
	// unordered - there is no ordered/random (hashing based)
	// map or multimap - there is ordering /sorted
	
	
	// It contains key,value pair
	
	// MAPS - LET'S discuss
	
	// map<int,int>mp;
	// -	it contains key,value pair;
	// -	Increasing order of keys is the default order
	// -	(1,2), (3,4),(2,5) ==> order will be (1,2),(2,5),(3,4);
	
	// Map will always contains UNIQUE keys
	
	
	
	
	// -difference between Vector and Map
		// - operations of map are more efficient than vectors
		// - self-balancing binary trees makes MAP
		// - complexity O(logN);
		
	
	//ordered map
	map<int,int>mp; // declaration
	//key-value pairs
	
	// mp[key] = value;
	mp[11] = 10;
	mp[22] = 20;
	mp[33] = 70; 
	
	//other way of inserting 
	
	mp.insert({44,90});
	
	mp.erase(22); // mp.erase(key);
	//iterators in one way
	map<int,int>::iterator it;
	
	for(it = mp.begin(); it!=mp.end(); it++){
		cout << it->first<< " " << it->second<<endl; 
	}
	
	cout << endl;
	map<string,int>info;
	
	info["hello"] = 5;
	info["demo"] = 10;
	
	info.insert({"Amrut", 07});
	
	//iterate using iterators
	
	// map<string,int>::iterator i;
	// alternate of iterator
	for(auto i:info){
		cout << i.first << " "<<i.second <<endl;
	}
	cout << endl;
	//key can be any datatype
	
	// map<vector<int>,int>v; // map of vectors(as key)
	
	//greater<int> is a comparator to print this is decreasing

	//finding key in map
	
	if(mp.find(33) != mp.end()){
		cout << "33 key is present" << endl;
	}
	
	
	map<int,int>mp_duplicate = mp;
	
	//Some complex maps examples
	
	map<vector<pair<int,pair<int,int>>>,int> ve;
	
}