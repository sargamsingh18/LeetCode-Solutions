class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pascalrow;
        long long ans=1;
        pascalrow.push_back(1);
        for(int i=1;i<=rowIndex;i++){
            ans=ans*(rowIndex-i+1)/i;
            pascalrow.push_back(ans);
        }
        return pascalrow;

        
    }
};