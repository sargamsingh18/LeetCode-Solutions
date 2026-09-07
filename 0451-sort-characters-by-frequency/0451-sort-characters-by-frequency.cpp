class Solution {
public:
    string frequencySort(string s) {
        int freq[256]={0};
        for(int i=0;i<s.length();i++)
        {
            freq[s[i]]++;

        }
        vector<pair<int,char>> v;
        for(int i=0;i<256;i++)
        if(freq[i]>0)
        v.push_back({freq[i],char(i)});
        sort(v.rbegin(),v.rend());

        string ans="";
        for(auto p:v){
            for(int i=0;i<p.first;i++)
            ans+=p.second;
        }
        return ans;
        
    }
};