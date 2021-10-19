#include<iostream>
using namespace std;
int main() {
	int n,m,a[1000][1000],val,flag=0;
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	cin>>val;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==val){
				flag++;
			}
		}
	}
	if(flag==1){
		cout<<"1";
	}
	else 
	cout<<"0";
	return 0;
}
