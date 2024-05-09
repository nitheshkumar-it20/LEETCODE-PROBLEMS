#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int p1=0;
	int p2=0;
	int extra=0;
	int n=s.size();
	int flag=0;
	for(int i=0;i<n;i++){
		if(flag==0 ){
		
		if(s[i]=='.'){
			continue;
		}
		else if(s[i]=='4'){
			p1+=4;
		}
		else if(s[i]=='6'){
			p1+=6;
		}
		else if(s[i]=='1'){
			p1+=1;
			flag=1;
		}
		else if(s[i]=='2'){
			p1+=2;
		}
		else if(s[i]=='3'){
			p1+=3;
			flag=1;
		}
		else if(s[i]=='W' || s[i]=='N'){
		 extra++;
		}
	
	}
	else if(flag==1 ){
		if(s[i]=='.'){
			continue;
		}
		else if(s[i]=='4'){
			p2+=4;
		}
		else if(s[i]=='6'){
			p2+=6;
		}
		else if(s[i]=='1'){
			p2+=1;
			flag=0;
		}
		else if(s[i]=='2'){
			p2+=2;
		}
		else if(s[i]=='3'){
			p2+=3;
			flag=0;
		}
		else if(s[i]=='W' || s[i]=='N'){
		 extra++;
		}
		
	}
	}
	cout<<"p1 score"<<p1<<" "<<"p2 score"<<p2<<" "<<"extras"<<extra;
}
