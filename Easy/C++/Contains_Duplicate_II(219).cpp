class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        unordered_map<int, int> map;
        for(int i = 0; i < a.size(); i++) {
            if(map.find(a[i]) != map.end() && i-map[a[i]] <= k) return true;
            map[a[i]] = i;
        }
        return false;
    }
};