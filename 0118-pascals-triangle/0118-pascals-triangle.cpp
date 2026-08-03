class Solution {
public:
    vector<int> g_row(int r){
        vector<int> gen;
        long long ans=1;
        gen.push_back(1);
        for(int i=1;i<=r;i++){
            ans=ans*(r-i+1)/i;
            gen.push_back(ans);

        }
        return gen;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> rows;
        for(int i=0;i<numRows;i++)
        {
            rows.push_back(g_row(i));
        }
        return rows;

        
        
    }
};