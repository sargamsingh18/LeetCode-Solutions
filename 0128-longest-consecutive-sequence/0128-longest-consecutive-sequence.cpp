class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int count=1;
        int maxi=1;
        for(int i=0;i+1<nums.size();i++)
        {
           
            if(nums[i+1]==nums[i]+1)
            count++;
            else if(nums[i+1]==nums[i])
            continue;
            else{
                maxi=max(maxi,count);
                count=1;
            }

        }

        maxi=max(maxi,count);
        return maxi;
        
    }
};