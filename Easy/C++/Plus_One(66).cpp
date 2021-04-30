class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        int rem = 1;
        for(int i = n - 1; i >= 0; i--) {
            
            int temp = (digits[i] + rem);
            digits[i] = temp % 10;
            rem = temp / 10;
        }
        if(rem) {
            digits.insert(digits.begin(), rem);
        }
        return digits;
            
    }
};