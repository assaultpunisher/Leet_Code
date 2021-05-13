import java.util.*;
class Solution {

public List<List<Integer>> combinationSum3(int k, int n) {
    
 List<List<Integer>>  res = new ArrayList<>();
  ArrayList<Integer> path = new ArrayList<>();
    
    
    dfs(k,1,n,res,path);
    return res;
   
    
}

public static void dfs(int k,int start,int n,List<List<Integer>> res,ArrayList<Integer> path){
    
    if(k==0){
        if(n==0){
            res.add(new ArrayList<>(path));
            return;
        }
    }
    
    for(int i =start;i<=9;i++){
        path.add(i);
        dfs(k-1,i+1,n-i,res,path);
        path.remove(path.size()-1);
        
    }
    
    
}
}