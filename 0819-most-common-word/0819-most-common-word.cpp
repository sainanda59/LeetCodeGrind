class Solution {
public:
    string mostCommonWord(string p, vector<string>& ban) {
        for(int i=0;i<p.size();i++){
            if(p[i]>='A' && p[i]<='Z')p[i]+=32;
        }
        unordered_map<string, int>b,c;
        for(auto it:ban)b[it]++;
        string curr="";
        for(int i=0;i<p.size();i++){
            if(p[i]<'a' || p[i]>'z')continue;
            curr+=p[i];
            if(p[i+1]<'a' || p[i+1]>'z'){
                c[curr]++;
                curr="";
            }
        }
        int mx=0;
        string ans;
        for(auto it:c){
            if(it.second>mx && b.find(it.first)==b.end()){
                mx=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};