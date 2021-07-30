#include<bits/stdc++.h>
using namespace std;

int right_most_bit(int n){
    int c=0;

    while(n!=0){
        int d=n%2;
        if(d==1){
            c++;
            break;
        }
        n=n/2;
        c++;
       }
      int res=1;

     if(c>1){
       for(int i=1;i<c;i++){
        res=res*2;
       }
   }

       return res;

}


int main(){
      
      int t;
     cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int sum=0;
        int j=0;
        for(int i=0;i<n;i=i+2){
            j=i+1;
            int ro=arr[i]|arr[j];
            sum=sum+right_most_bit(ro);

        }
        // cout<<ro<<endl;
        // right_most_bit(n);
        cout<<sum<<endl;
        // int ans=right_most_bit(n);
        // cout<<ans<<endl;

    }
}