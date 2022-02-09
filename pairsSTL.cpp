#include<bits/stdc++.h>
using namespace std;

void fun(pair<int,int> &p){ // passing pair by reference;
	p.first = 10010;
	
}



int main(){
	
	//pairs 
	pair<int,int>p;
	
	
	//first and second element
	p.first = 10;
	p.second = 20;
	
	cout << p.first << " "<<p.second <<endl;
	
	//creating array of pairs
	
	pair<int,int>arr[2000]; // weusually use vectors
	
	vector<pair<int,int>>v; // vectors of pairs
	 
	//create 2 size array of pairs
	
	arr[0].first = 1;
	arr[0].second = 2;
	
	arr[1].first = 10;
	arr[1].second = 20;
	
	for(int i = 0; i<2; i++){
		cout << arr[i].first << " "<< arr[i].second << endl;
	}
	
	fun(p);
	
	cout << p.first << " "<< p.second <<endl;
	
	
}