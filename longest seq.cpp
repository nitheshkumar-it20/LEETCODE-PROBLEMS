#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int out=0;
	int i=0;
	int n=s.size()-1;
	while(i<=n){
		if(s[i]==s[n]){
			out=max(out,n+1-2);
		}
		i++;
	}
	int j=n-1;
	int a=0;
	while(j>=a){
		if(s[j]==s[a]){
			out=max(out,j-1-2);
		}
		j--;
	}
	cout<<out;
}
