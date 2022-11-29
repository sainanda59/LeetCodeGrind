class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        unordered_map<int,int>ump1;
        int sum1=0,sum2=0;
        for(auto it:aliceSizes){
            sum1+=it;
            ump1[it]++;
        }
        for(auto it:bobSizes){
            sum2+=it;
        }
        int diff = (sum1-sum2)/2;
        for(auto it:bobSizes){
           if(ump1[it+diff]>0)
               return {it+diff,it};
        }
        return {-1,-1};
    }
};