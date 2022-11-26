//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[price[i]]+=(i+1);
        }
        sort(price,price+n);
        int ans=0;
        for(auto it:mp){
            int x= it.second;
            int y = it.first;
            while(x && k-y>=0){
                k-=y;
                x--;
                ans++;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends