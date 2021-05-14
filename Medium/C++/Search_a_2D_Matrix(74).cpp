class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& m, int target) {
        //double binary search
        if(!m.size() || !m[0].size()) return false;
        
        int rowThatProbablyHasTarget, mid;
        int lo = 0, hi = m.size()-1;
        
        
        while(lo < hi) {
            mid = (lo + hi)/2;
            
            if(m[mid].back() < target) {  //check if the greatest element of a row is smaller than the target
                lo = mid + 1;
            }
            
            else if(m[mid][0] > target) { 
                hi = mid-1;
            }
            else {
                lo = mid;
                break;
            }
        }
        
        
        rowThatProbablyHasTarget = lo;
        lo = 0;
        hi = m[rowThatProbablyHasTarget].size()-1;
        
        
        while (lo <= hi) {      //important case
            mid = (lo + hi)/2;
            
            if(m[rowThatProbablyHasTarget][mid] < target) {
                lo = mid + 1;
            }
            
            else if(m[rowThatProbablyHasTarget][mid] > target) {
                hi = mid-1;
            }
            
            else return true;
        }
        
        return false;
        
        
    }
};