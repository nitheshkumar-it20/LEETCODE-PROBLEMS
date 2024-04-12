#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<vector<int>>arr{{1,2,3},{4,5,6},{7,8,9}};
	int left=0;
	int top=0;
	int right=arr[0].size()-1;
	int down=arr.size()-1;
	vector<int>v;
	int dir=0;
	while(left<=right && top<=down){
		if(dir==0){
		
		for(int i=left;i<=right;i++){
			v.push_back(arr[top][i]);
		}
		top++;
		
	}
	else if(dir==1){
	
		for(int i=top;i<=down;i++){
			v.push_back(arr[i][right]);
		}
		right--;
	}
	else if(dir==2){
	
		for(int i=right;i>=left;i--){
			v.push_back(arr[down][i]);
		}
		down--;
	}
	else{
	
		for(int i=down;i>=top;i--){
			v.push_back(arr[i][left]);
			
		}
		left++;
	}
	dir++;
	dir=dir%4;
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
}