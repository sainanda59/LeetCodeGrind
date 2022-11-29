class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        unordered_map<int,int>ump1,ump2;
        int sum1=0,sum2=0;
        for(auto it:aliceSizes){
            sum1+=it;
            ump1[it]++;
        }
        for(auto it:bobSizes){
            sum2+=it;
            ump2[it]++;
        }
        int diff = abs(sum1-sum2);
        int req = diff/2;
        if(sum1==sum2){
           for(auto it:ump1){
               if(ump2[it.first]>0)
                   return {it.first,it.first};
           } 
        }
        else if(sum1>sum2){
            for(auto it:ump1){
                if(ump2[it.first-req]>0)
                    return {it.first,it.first-req};
            }
        }
        else{
            for(auto it:ump1){
                if(ump2[it.first+req]>0)
                    return {it.first,it.first+req};
            }
        }
        return {-1,-1};
    }
};