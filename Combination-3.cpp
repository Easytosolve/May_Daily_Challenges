class Solution {
public:
     vector<vector<int>> final;
    void check(int i,int target,vector<int> &ans,int k){
            if(target==0&&k==0){
                final.push_back(ans);
                return;
            }
            if(target<0||k<0){
                return ;
            }
            if(i==10){
                return ;
            }
            
            //ignore that particular element
            
            check(i+1,target,ans,k);
                
                
            //    consoder that particular element  
                ans.push_back(i);
            check(i+1,target-i,ans,k-1);
         ans.pop_back();
        
        
       
        
            
            
           
        }
        
        
        
    vector<vector<int>> combinationSum3(int k, int n) {
       
        
        
        vector<int> ans;
        check(1,n,ans,k);
        
        return final;
        
        
    }
};
