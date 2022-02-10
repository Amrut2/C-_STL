#include<bits/stdc++.h>
using namespace std;

int main(){
	
	//declaration
	// set<int>set1; // ordered set
	
	// multiset<int>mst1; // multiset
	
	// unordered_set<int>uno; //unordered set
	
	// unordered_multiset<int>um; // unordered multiset
	
	// Set - a container
			// - in array we can modify but cant modify elements here
			// - we can only add, remove, delete element but cant modify here
			// - implemented using Balanced Binary search trees
			// - insertion,deleteion takes O(logN) time because of Trees;
			// - no duplicates ==> {1,1,2} like this not allowed
			// - default order is increasing; no matter what order you input
			
	//Code
	
	set<int>s1;
	
	s1.insert(1);  // it will take O(logN) because of self balancing trees;
	s1.insert(1);
	s1.insert(2);
	s1.insert(3);
	s1.insert(4);
	
	for(auto i:s1)cout << i << " ";  //  1 is printed once
	cout << endl;

	set<string>s;
	s.insert("as");
	s.insert("ds");
	s.insert("bs");
	s.insert("sdf");
	
	
	// increasing order of wrt to first element;
	set<pair<int,int>>s2; // default increasing order
	
	// What If we want to custom ordering
	// set<int,greater<int>>s2;  // it has become decreasing order
	
	
	
	// printing method 1
	for(auto i:s)cout << i << " ";
	cout << endl;
	
	// Printing set using iterator (method-2)

	set<int>::iterator it;
	for(it = s1.begin();it != s1.end(); it++){
		cout << *it << " ";   // * here is used to deference;
	}
	cout<<endl;
	
	
	//Deletion of element
	s1.erase(4); // setname.erase(value)
	for(auto i:s1)cout << i << " ";
	cout << endl;

	// Other way of delete 
	// find function => gives iterator of that value

	s.erase(s.find("as"));
	for(auto i:s)cout << i << " ";
	cout << endl;

	//size	
	cout << s1.size() << endl;
	
	//empty
	
	s1.empty();
	
	//erase all elements;
	s1.clear();
	
	
	
	
	return 0;
}