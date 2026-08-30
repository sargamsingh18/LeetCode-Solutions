class Solution {
public:
    bool sub(vector<int> &a,int k,int n)
    {
        int count=1;
        int sum=0;
        for(int i=0;i<a.size();i++)
        {
            if(sum+a[i]<=n)
            sum+=a[i];
            else
            {
                count++;
                sum=a[i];
            }
        }
        if(count<=k)
        return true;
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(sub(nums,k,mid))
            high=mid-1;
            else
            low=mid+1;


        }
        return low;
        
    }
};