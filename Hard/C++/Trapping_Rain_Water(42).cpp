class Solution {
public:
    int trap(vector<int>& h) {
        
        int n=h.size();
        if(n==0)
            return 0;
        vector<int> ml(n);     //vector to store largest on left side
        vector<int> mr(n);     //vector to store largest on left side
        ml[0]=h[0];
        mr[n-1]=h[n-1];
        
        for(int i=1;i<n;i++)    
        {
           ml[i]=max(h[i],ml[i-1]); //finding max on left side of each building
        }
        
        for(int i=n-2;i>=0;i--)
        {
            mr[i]=max(h[i],mr[i+1]);  // finding max on right side of each building
        }
        int area=0;
        for(int i=0;i<n;i++)
        {
            area=area+ (min(ml[i],mr[i])-h[i]);   //water will fill from above the building
        }                                         // till the min level from both side of a building
        return area;
    }
};