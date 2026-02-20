1class Solution {
2public:
3int logic(char c)
4{
5    if (c=='I') return 1;
6    if (c=='V') return 5;
7    if(c=='X') return 10;
8    if(c=='L') return 50;
9    if(c=='C') return 100;
10    if(c=='D') return 500;
11    else return 1000;
12}
13    int romanToInt(string s) {
14        int sum=0;
15        for(int i=0;i<s.size();i++)
16        {
17            if(i+1<s.size() && logic(s[i])<logic(s[i+1]))
18            sum-=logic(s[i]);
19            else 
20            sum+=logic(s[i]);
21        }
22        return sum;
23        
24    }
25};