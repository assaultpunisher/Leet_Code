class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        
        int res=0;
        heights.push_back(0);// to clear the vector at end
        vector<int> index;// store the indexes to get the width easily
        
        for(int i=0;i<heights.size();i++)
        {
            
            while(index.size()>0 and heights[i]<heights[index.back()])
            {
                
                int h=heights[index.back()];// start poping the bars coz we can not streach them further
                
                index.pop_back();
                
                int x=index.size() > 0 ? index.back() : -1;// getting the index
                
                
                res=max(res,h*(i-x-1));// i-x-1 is the width of the current rectangle with height h;
    
            }
            index.push_back(i);
        }
        return res;
    }
};