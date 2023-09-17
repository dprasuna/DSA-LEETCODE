class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        int ans=0,diff=INT_MAX,n=nums.size();
        
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;i++){
            int l=i+1,h=n-1;
            while(l<h){
                int s=nums[i]+nums[l]+nums[h];
                if(abs(s-t)<diff){
                    ans=s;
                    diff=abs(t-s);
                }
                    
                if(s==t){
                    return s;
                }
                else if(s<t) l++;
                else h--;
            }
        }
        return ans;
    }
};
