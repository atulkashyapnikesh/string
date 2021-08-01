#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int arr[n][m]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}

		int top=0,down=n-1,l=0,r=m-1;
		int d=0;

        vector<int> v;
        while(top<=down && l<=r){

		if(d==0){

			for(int i=l;i<=r;i++){
				v.push_back(arr[top][i]);
			}
			top+=1;

		}
		else if(d==1){
			for(int i=top;i<=down;i++){
				v.push_back(arr[i][r]);
			}
			r-=1;
		}
		else if(d==2){
			for(int i=r;i>=l;i--){
				v.push_back(arr[down][i]);
			}
			down-=1;
		}
		else if(d==3){
			for(int i=d;i>=top;i--){
				v.push_back(arr[i][l]);
			}
			l+=1;
		}

		d=(d+1)%4;
	}
	for(int i =0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
}