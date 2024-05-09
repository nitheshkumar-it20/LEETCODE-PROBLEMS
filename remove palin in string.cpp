#include<bits/stdc++.h>
using namespace std;
bool checkpal(string s){
	int i=0;
	int n=s.size()-1;
	while(i<n){
		if(s[i]!=s[n]){
			return false;
		}
		i++;
		n--;
	}
	return true;
}
int main(){
	string str;
	getline(cin,str);
	int n=str.size();
	int i=0;
	vector<string>v;
	string add="";
	while(i<n){
		if(i>=n){
			break;
		}
			while(str[i]==' '){
			i++;
		}
			if(i>=n){
			break;
		}
		
		while(str[i]!=' ' && i<n){
			add+=str[i];
			i++;
		}
		v.push_back(add);
		add="";
		i++;
	
		
	}
	string ans="";
	for(int i=0;i<v.size();i++){
		if(checkpal(v[i])){
			continue;
		}
		else{
			if(ans.size()==0){
				ans=v[i];
			}
			else{
				ans=ans+" "+v[i];
			}
		}
	}
	cout<<ans;
	
}
