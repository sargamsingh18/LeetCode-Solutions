class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.length();
        int count =0;
        vector <int> upper(26,-1);
        vector <int> lower(26,-1);
        for(int i=0;i<n;i++)
        {
            if(word[i]>=65 && word[i]<=90)
            {
                if(upper[word[i]-'A']==-1) upper[word[i]-'A']=i;
            }
            else{
                lower[word[i]-'a']=i;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(lower[i]==-1 || upper[i]==-1) continue;
            if(lower[i]<upper[i]) count++;
        }
        return count;

        
    }
};