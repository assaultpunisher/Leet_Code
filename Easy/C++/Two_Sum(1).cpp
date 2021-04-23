class Solution {
struct Less {
    bool operator()(pair<int, int> &a, pair<int, int> &b) {
        return a.second < b.second;
    }
};

public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<pair<int, int>> number;
        for (int i = 0; i < numbers.size(); i++) {
            number.push_back(make_pair(i, numbers[i])); 
        }
        sort(number.begin(), number.end(), Less());
        int L = 0, R = numbers.size() - 1;
        while (L < R) {
            if (number[L].second + number[R].second == target) {
                int t1 = number[L].first;
                int t2 = number[R].first;
                vector<int> result{min(t1, t2), max(t1, t2)};
                return result;
            }
            if (number[L].second + number[R].second < target) {
                L++;
            } else {
                R--;
            }
        }
        vector<int> result{-1, -1};
        return result;
    }
};