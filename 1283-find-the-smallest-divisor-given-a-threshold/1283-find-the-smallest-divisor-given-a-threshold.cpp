class Solution {
public:
int m(vector <int> &a)
{
    return *max_element(a.begin(),a.end());
}
long long calc(vector<int> &nums,int n)
{
    long long sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=(nums[i]+n-1)/n;
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
       int low=1;
       int high=m(nums);
       while(low<=high)
       {
        int mid=(low+high)/2;
        long long sum=calc(nums,mid);
        if(sum<=threshold)
        high=mid-1;
        else
        low=mid+1;

       }
       return low;
        
    }
};