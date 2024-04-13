#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<j+1;
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<i+1;
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=n;j>i;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		for(int a=n;a>i;a--){
			cout<<" ";
		}
		for(int b=i;b>0;b--){
			cout<<"* ";
		}
		for(int c=n;c>i;c--){
			cout<<" ";
		}
		cout<<endl;
	}
	for(int i=n;i>0;i--){
		for(int a=i;a<n;a++){
			cout<<" ";
		}
		for(int b=0;b<i;b++){
			cout<<"* ";
		}
		for(int c=i;c<n;c++){
			cout<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
	
		for(int b=i;b>=0;b--){
			cout<<"* ";
		}
		
		cout<<endl;
	}
	for(int i=n-1;i>0;i--){
	
		for(int b=0;b<i;b++){
			cout<<"* ";
		}
		
		cout<<endl;
	} 
	int b=0;
	for(int i=0;i<n;i++){
		for(int j=i;j>=0;j--){
			cout<<b;
			if(b==0){
				b=1;
			}
			else{
				b=0;
			}
			
		}
		cout<<endl;
	}
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		for(int a=n;a>i;a--){
			cout<<" ";
		}
		for(int a=n;a>i;a--){
			cout<<" ";
		}
		for(int b=i;b>0;b--){
			cout<<b;
		}
		cout<<endl;
	}
	int add=1;
	for(int i=0;i<n;i++){
		for(int j=i;j>=0;j--){
			cout<<add;
			add++;
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		char c='A';
		for(int j=i;j>=0;j--){
			cout<<c;
			c++;
		}
		cout<<endl;
	}
	for(int i=n;i>0;i--){
		char d='A';
		for(int j=0;j<i;j++){
			cout<<d;
			d++;
		}
		cout<<endl;
	}
	for(int i=1;i<=4;i++){
		for(int a=4;a>i;a--){
			cout<<" ";
		}
		char ck='A';
		for(int b=0;b<i;b++){
			cout<<ck;
			ck++;
		}
	   if(i==1){ 
		cout<<endl;
	}
	else{
		char ck='A';
		for(int c=0;c<i-1;c++){
			cout<<ck;
			ck++;
		}
		cout<<endl;
	}
	}
	
	for(int i=0;i<n;i++){
		char k='E'-i;
		for(int j=0;j<=i;j++){
			cout<<k;
			k++;
		}
		cout<<endl;
	}
	for(int i=0;i<=n;i++){
		for(int a=n-i;a>=0;a--){
			cout<<"*";
		}
		for(int b=i;b>0;b--){
			cout<<" ";
		}
		for(int b=i;b>0;b--){
			cout<<" ";
		}
		for(int c=n-i;c>=0;c--){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n;i>=0;i--){
		for(int a=n-i;a>=0;a--){
			cout<<"*";
		}
		for(int b=i;b>0;b--){
			cout<<" ";
		}
		for(int b=i;b>0;b--){
			cout<<" ";
		}
		for(int c=n-i;c>=0;c--){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 || j==0 || i==n-1 || j==n-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(int i=0;i<2*n-1;i++){
         
         // inner loop for no. of columns.
         for(int j=0;j<2*n-1;j++){
             
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
         }
         
         // As soon as the numbers for each iteration are printed, we move to the
         // next row and give a line break otherwise all numbers
         // would get printed in 1 line.
         cout<<endl;
     }
	
	
	
	
}
