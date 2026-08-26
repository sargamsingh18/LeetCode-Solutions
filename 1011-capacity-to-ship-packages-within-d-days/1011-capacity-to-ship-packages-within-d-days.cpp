class Solution {
public:
int s(vector<int> &w)
{
    int sum=0;
    for(int i=0;i<w.size();i++)
    sum+=w[i];
    return sum;

}
int dtaken(vector <int>&w,int c)
{
    int d=0;
    int count=1;
    for(int i=0;i<w.size();i++)
    {
        if(d+w[i]<=c)
        {
            d+=w[i];
        }
        else
        {
            count++;
            d=w[i];
        }

    }
    return count;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=s(weights);
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(dtaken(weights,mid)<=days)
            high=mid-1; 
            else
            low=mid+1;
            

        }
        return low;
        
    }
};