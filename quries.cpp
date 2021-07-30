#include<bits/stdc++.h>
using namespace std;

int print(vector<int> v,int out){
	int n=v.size();
	for(int i=0;i<n;i++){
					cout<<v[i]<<" ";
				}
				cout<<endl;
	
	
	for(int i=0;i<n;i++){
		if(v[i]==out){
			return i+1;

		}
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> arr;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			arr.push_back(x);
		}
		int q;
		cin>>q;
		int query[q][3];
		for(int i=0;i<q;i++){
			for(int j=0;j<3;j++){

				cin>>query[i][j];

			}
		}
		

		for(int i=0;i<q;i++){
			if(query[i][0]==1){
				reverse(arr.begin(),arr.end());
				for(int i=0;i<n;i++){
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
				else if(query[i][0]==2){
					int f=(query[i][1])-1;
					int s=(query[i][2])-1;
					swap(arr[f],arr[s]);
					for(int i=0;i<n;i++){
					cout<<arr[i]<<" ";
				}
				cout<<endl;
					//swap(arr[query[i][1]],arr[query[i][2]]);
				}
				else if(query[i][0]==3){
					int out=(query[i][1]);
					cout<<"print = "<<out<<endl;
					cout<<print(arr,out)<<"   ";
					 cout<<endl;
				}
			}
		}
	}
