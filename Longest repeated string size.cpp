#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int k;
	cin>>k;
	int n=str.size();
	vector<int>v(26,0);
	int start=0;
	int maxlength=INT_MIN;
	int maxcount=INT_MIN;
	for(int end=0;end<n;end++){
		maxcount=max(maxcount,++v[str[end]-'A']);
		
		while(end-start+1-maxcount>k){
			v[str[end]]--;
			start++;
		}
		
		maxlength=max(maxlength,end-start+1);
	}
	cout<<maxlength;
	}

