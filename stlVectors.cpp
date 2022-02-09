#include<bits/stdc++.h>
using namespace std;

void fun(vector<int>v){
	v[0]+=10;
	for(auto i:v)cout<<i<<endl;
	
}

int main(){
	
	vector<int>v(5);
	
	// for(int i = 0; i<(int)v.size();++i){
	// 	cin>>v[i];
	// }
	
	for(auto &it: v)cin >> it;
		
		//iterator to cout ;
		
	vector<int>::iterator it;
	
	for ( it = v.begin(); it != v.end(); it++)
	{
		/* code */
		cout << *it << " ";

	}
	
	cout << endl;
	
	
	// access last element of vector 
	int size = v.size();
	cout << v[size-1]<< endl;
	cout << v.back() <<endl;
	
	
	//Copy this vector v  into vector b(other copy is created)
	
	vector<int>b = v;
	for(auto i:b)cout <<i<<" ";
		
}