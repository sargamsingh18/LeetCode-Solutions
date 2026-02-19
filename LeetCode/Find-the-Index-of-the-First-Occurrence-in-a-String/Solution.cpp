1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        
5        if(needle.size() > haystack.size()) return -1;
6         int n = needle.size();
7        int m = haystack.size();
8
9        vector<int> arr(n);
10        vector<int> word(m);
11        for(int i=0;i<n;i++)
12        {
13            arr[i]=needle[i];
14
15        }
16        for(int i=0;i<m;i++)
17        {
18             word[i] = haystack[i];
19        }
20        
21        for(int i = 0; i <=m -n; i++) {
22            int count=0;
23            for (int j = 0; j < n; j++) {
24                if (i + j < m && word[i + j] == arr[j]) {
25                    count++;
26                } else {
27                    break;
28                }
29            }
30
31            if (count ==n) {
32                return i;  
33            }
34        }
35
36        return -1;   
37    }
38};