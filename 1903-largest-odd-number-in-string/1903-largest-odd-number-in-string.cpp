class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        string ans="";
        if(num[n-1]%2!=0){
        for(int i=0;i<n;i++)
        ans+=num[i];
        }
        else{
        for(int i=n-2;i>=0;i--)
        {
            if(num[i]%2!=0)
            {
                for(int j=0;j<=i;j++)
                ans+=num[j];
                break;
            }
              
        }
        }
        

        return ans;
        
    }
};