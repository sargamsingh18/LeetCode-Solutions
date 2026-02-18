1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4      
5        int n=nums.size();
6          k=k%n;
7       vector<int> temp(n - k);
8        for(int i=0;i<n-k;i++)
9        {
10            temp[i]=nums[i];
11        }
12        for(int i=n-k;i<n;i++)
13        {
14            nums[i-(n-k)]=nums[i];
15        }
16        for(int i=k;i<n;i++)
17        {
18            nums[i]=temp[i-k];
19        }
20        
21    }
22};
23        
24 