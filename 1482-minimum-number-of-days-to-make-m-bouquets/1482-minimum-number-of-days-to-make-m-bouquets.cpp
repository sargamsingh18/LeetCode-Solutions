class Solution {
public:
int minr(vector <int> &a)
    {
        int mn=INT_MAX;
        for(int i=0;i<a.size();i++)
        {
            mn=min(a[i],mn);
        }
        return mn;
    }
    int maxr(vector <int> &a)
    {
        int mx=1;
        for(int i=0;i<a.size();i++)
        {
            mx=max(a[i],mx);
        }
        return mx;
    }
    int days(vector <int> &a,int d,int k)
    {
        int count=0;
        int bouquet=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<=d)
            count++;
            else
            count=0;
            if(count==k){
            bouquet++;
            count=0;
            }
        }
        return bouquet;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
    if((long long)m*k > bloomDay.size())
    return -1;
        int low=minr(bloomDay);
        int high=maxr(bloomDay);
        while(low<=high)
        {
            int mid=(low+high)/2;
            int no=days(bloomDay,mid,k);
            if(no>=m)
            high=mid-1;
            else
            low=mid+1;
            
        }
        return low;
    }
    
};