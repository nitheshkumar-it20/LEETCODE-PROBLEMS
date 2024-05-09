#include<bits/stdc++.h>
using namespace std;

int dfs(int i,int j,int count,int x,int y){
	if(i==x || j==y){
		count++;
		return count;
	}
	count=dfs(i,j+1,count,x,y);
	count=dfs(i+1,j,count,x,y);
	return count;
}
int main(){
	int n;
	cin>>n;

	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int i;
	int j;
	int x;
	int y;
	cin>>i;
	cin>>j;
	cin>>x;
	cin>>y;
	int count=0;
	cout<<dfs(i,j,0,x,y);
	
	 
}
