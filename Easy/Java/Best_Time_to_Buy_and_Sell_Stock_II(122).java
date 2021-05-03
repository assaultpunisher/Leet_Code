class Solution {
    public int maxProfit(int[] prices) {
        int held = Integer.MIN_VALUE, sold = 0;
        for (int price : prices) {
            int preSold = sold;
            sold = Math.max(sold, held + price);
            held = Math.max(held, preSold - price);
        }
        return sold;
    }
}