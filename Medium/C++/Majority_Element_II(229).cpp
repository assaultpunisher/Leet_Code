class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int m=0, n=0, countm=0, countn=0;
        for (int &i : nums) {
            if (i==m) ++countm;
            else if (i==n) ++countn;
            else if (countm==0) m=i, countm=1;
            else if (countn==0) n=i, countn=1;
            else --countm, --countn;
        }
        countm = countn = 0;
        for (int &i : nums) {
            if (i==m) ++countm;
            else if (i==n) ++countn;
        }
        if (countm > nums.size()/3) res.push_back(m);
        if (countn > nums.size()/3) res.push_back(n);
        return res;
    }
};