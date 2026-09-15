class Solution {
public:
    void solve(vector<int>&nums,int index,vector<int>&ds,vector<vector<int>>&ans){

        ans.push_back(ds);

        for(int i=index;i<nums.size();i++){
            ds.push_back(nums[i]);
            solve(nums,i+1,ds,ans);
            ds.pop_back();
        }



    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;

        solve(nums,0,ds,ans);
        return ans;
    }
};
