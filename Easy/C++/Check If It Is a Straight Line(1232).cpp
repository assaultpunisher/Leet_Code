class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

	bool res = false;
    float slope, curSlope;
    sort(coordinates.begin(), coordinates.end());
    for(int i=1; i<coordinates.size();i++)
    {
        curSlope = (float)(coordinates[i][1]-coordinates[i-1][1])/(float)(coordinates[i][0]-coordinates[i-1][0]);
        if (i == 1)
            slope = curSlope;
        else if (curSlope != slope)
            break;
        
        if (i == coordinates.size()-1)
            res = true;
    }
    
    return res;
}
};