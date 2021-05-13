class Solution {
    vector<vector<int>> ans;
    vector<int> curr;
public:
    void solver(int s,int t,int k){
        if(t==0&&k==0){
            ans.push_back(curr);
            return;
        }
        if(!(k*t)||s>9)
            return;
        for(int i=s;i<10;i++){
            curr.push_back(i);
            solver(i+1,t-i,k-1);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        solver(1,n,k);
        return ans;
    }
};