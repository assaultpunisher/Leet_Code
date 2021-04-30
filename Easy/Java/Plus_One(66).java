class Solution {
    public int[] plusOne(int[] digits) {
        
        int carry = 0;
        int[] result = new int[digits.length+1];
        int sum_total = 0;
        
        for(int i = digits.length-1; i >= 0; i--)
        {
            sum_total = digits[i] + ((i == digits.length-1) ? 1 : 0) + carry;
            digits[i] = sum_total % 10;
            result[i+1] = sum_total % 10;
            carry = sum_total / 10;
        }
        
        result[0] = (carry > 0) ? 1 : 0;
                
        return (carry > 0) ? result : digits;
    }
}