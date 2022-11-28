//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
#define ll long long int
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    ll curr=0;
	    ll mxlen=0;
	    ll sum=0;
	    ll mx=0;
	    ll mxi=0;
	    ll i;
	    for(i=0;i<n;i++){
	        if(a[i]>=0){
	            curr++;
	            sum+=a[i];
	        }
	        else{
	            if(sum>mx){
	                mx=sum;
	                mxlen=curr;
	                mxi=i-1;
	            }
	            else if(sum==mx && mxlen<curr){
	                mxlen=curr;
	                mxi=i-1;
	            }
	            curr=0;
	            sum=0;
	        }
	    }
	    if(sum>mx){
	                mx=sum;
	                mxlen=curr;
	                mxi=i-1;
	            }
	    else if(sum==mx && mxlen<curr){
	                mxlen=curr;
	                mxi=i-1;
	            }
	   if(mxlen==0)return {-1};
	   else{
	       vector<int>ans;
	       int x=mxi-mxlen+1;
	       for(int i=x;i<=mxi;i++)
	       ans.push_back(a[i]);
	       return ans;
	   }
	            
	    
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends