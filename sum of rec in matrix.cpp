#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int m;
	cin>>n;
	cin>>m;

	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int i;
	cin>>i;
	int j;
	cin>>j;
	int x;
	cin>>x;
	int y;
	cin>>y;
	
	
	
	int sum=0;
     for(int a=i;a<=x;a++){
     	for(int b=j;b<=y;b++){
     		sum+=arr[a][b];
		 }
	 }
	 cout<<sum;
	
}
