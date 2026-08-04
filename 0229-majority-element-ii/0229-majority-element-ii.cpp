class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> me;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j])
                count++;
            }
            if(count>n/3 && find(me.begin(),me.end(), nums[i])==me.end())
                me.push_back(nums[i]);
            }
        return me;
    }
};