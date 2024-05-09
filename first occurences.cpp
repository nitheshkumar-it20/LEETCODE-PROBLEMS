#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);
	map<char,int>mp;

	for(int i=0;i<s1.size();i++){
	    if(mp.find(s1[i])==mp.end()){
	        mp[s1[i]]=i;
	    }
	}
	int mini=INT_MAX;
	int maxi=INT_MIN;
	for(int i=0;i<s2.size();i++){
	    if(mp[s2[i]]<mini){
	        mini=min(mini,mp[s2[i]]);
	    }
	    if(mp[s2[i]]>maxi){
	        maxi=max(maxi,mp[s2[i]]);
	    }
	}
	for(int i=mini;i<=maxi;i++){
	    cout<<s1[i];
	}
}