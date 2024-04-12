#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
	unordered_map<char,int>mp{
		{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
		
	};
	string str;
	cin>>str;
	int n=str.size();
	int val;
	for(int i=0;i<n;i++){
		if(str[i]<str[i+1]){
			val=val-mp[str[i]];
		}
		else{
			val=val+mp[str[i]];
		}
	}
	cout<<val;
}