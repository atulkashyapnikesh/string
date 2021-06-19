#include<bits/stdc++.h>
using namespace std;

int count1(string str,char c){
	int n=str.size();
	int count=0;
	for(int i=0;i<n;i++){
		if(str[i]==c)
			count++;
	}
	return count;
}

int main(){
	int t;
	cin>>t;

	while(t--){
		string str="";
		int n;
		cin>>n;
		cin>>str;
		string str1,str2;
		int max=INT_MIN;
		for(int i=0;i<n;i++){
			str1.push_back(str[i]);
			str2=str1;

			int left=count1(str2,'A');
			// cout<<str2<<endl;
			int right=count1(str.substr(i+1,n),'B');
			// cout<<str.substr(i+1,n)<<endl;
			int sum=left+right;
			if(sum>max)
				max=sum;
		}
		cout<<max<<endl;
	
	}
}

