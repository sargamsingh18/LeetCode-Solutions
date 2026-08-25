class Solution {
public:
    int findm(vector <int> &p)
    {
        int mx=0;
        for(int i=0;i<p.size();i++)
        {
            mx=max(p[i],mx);
        }
        return mx;
    }
    long long timet(vector<int> &p, int mid)
    {
        long long tt=0;
        for(int i=0;i<p.size();i++)
        {
            tt+=(p[i]+mid-1)/mid;
        }
        return tt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=findm(piles);
        while(low<=high)
        {
            int mid=(high+low)/2;
            long long tt=timet(piles,mid);
            if(tt<=h)
            {
                high=mid-1;
            }
            else
            low=mid+1;
        }
        
        return low;
        
    }
};