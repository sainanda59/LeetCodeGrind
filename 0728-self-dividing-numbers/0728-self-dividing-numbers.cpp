class Solution {
public:
    bool selfDiv(int n){
        int x=n;
        while(n){
            if(n%10==0 ||x%(n%10)!=0)return false;
            n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(selfDiv(i))ans.push_back(i);
        }
        return ans;
    }
};