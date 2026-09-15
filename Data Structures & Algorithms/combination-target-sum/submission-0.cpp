class Solution {
public:
    void solve(vector<int>& nums, int target,int index,vector<int>&ds,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(ds);
            return;
        }

        if(target<0){
            return ;
        }

        for(int i=index;i<nums.size();i++){
            ds.push_back(nums[i]);
            solve(nums,target-nums[i],i,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<int>ds;
        vector<vector<int>>ans;

        solve(nums,target,0,ds,ans);

        return ans;
    }
};
