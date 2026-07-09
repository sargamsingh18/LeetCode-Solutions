class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++)
            if(heights[j]>heights[i]){
                swap(heights[j],heights[i]);
                swap(names[j],names[i]);

            }
            


        }
        return names;
        
    }
};