class Solution {
public:
    bool checkRecord(string s) {
        int abs=0;
        int mxl=0;
        for(int i=0;i<s.size();i++){
            char it = s[i];
            if(it=='A')abs++;
            if(it=='L'){
                int curr=0;
                while(s[i+curr]=='L')curr++;
                mxl=max(mxl,curr);
            }
        }
       return (abs<2 && mxl<=2);
    }
};