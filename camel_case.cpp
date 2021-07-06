#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void camel_case(string s){
	int n=s.size();
	cout<<n<<endl;
	int j=0;
	int c=0;
	for(int i=0;i<n;i++){
		if(i==0){

			s[j++]=toupper(s[i]);
          }
          else if(s[i] ==' '){
          	s[j++]=toupper(s[i+1]);
          	c=1;
          }
          else if(c==1){
          	c=0;continue;
          }
          else 
          	s[j++]=s[i];
	}
	s[j]='\0';
      for(int i=0;s[i]!='\0';i++){
      	cout<<s[i];
      }
      cout<<endl;
}


int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string s="atul tashyap nikita kumar";
		// getline(cin,s);
		camel_case(s);
	}
	return 0;
}