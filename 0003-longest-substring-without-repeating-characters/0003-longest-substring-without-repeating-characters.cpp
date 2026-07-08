class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        for(int i=0;i<s.size();i++){
            int freq[256]={0};
            for(int j=i;j<s.size();j++){
                freq[s[j]]++;
                if(freq[s[j]]>1)
                break;
                l=max(l,j-i+1);

            }
            
        }
        return l;
        
    }
};