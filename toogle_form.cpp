#include<bits/stdc++.h>
using namespace std;

void toogle(string s){
	int n=s.size();
	for(int i=0;i<n;i=i+2){
		s[i]=toupper(s[i]);
     }

     for(int i=0;i<n;i++)
     	cout<<s[i];
     cout<<endl;

}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		toogle(s);
	}
}