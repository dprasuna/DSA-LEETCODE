class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> mp(256,-1);
        
        int n=s.size(),l=0,r=0,ans=0;
        
        while(r<n){
            if(mp[s[r]]!=-1) 
                l=max(l,mp[s[r]]+1);
            
            mp[s[r]]=r;
            ans=max(ans,r-l+1);
            r++;
        }
         return ans;
    }
};
