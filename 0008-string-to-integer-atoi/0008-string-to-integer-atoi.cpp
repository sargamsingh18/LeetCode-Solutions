class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        int sign=1,i=0;
        while(i<s.length() && s[i]==' ')
        i++;
            if(i<s.length() && (s[i]=='+'||s[i]=='-')){
            if(s[i]=='-')
            sign=-1;
            i++;
            }
            while(i<s.length() && isdigit(s[i])){
            ans=ans*10+(s[i]-'0');
             if (sign == 1 && ans > INT_MAX)
                return INT_MAX;

            if (sign == -1 && -ans < INT_MIN)
                return INT_MIN;
            i++;
            }

        return ans*sign;

        
    }
};