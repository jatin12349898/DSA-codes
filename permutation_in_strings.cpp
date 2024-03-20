#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    void solve(vector<int> nums, vector<vector<int>> &ans, int fi)
    {
            //cout<<fi<<endl;
        if (fi >= nums.size())
        {
            ans.push_back(nums);
            return; 
        }
        for (int i = fi; i < nums.size(); i++)
        {
            swap(nums[fi], nums[i]);
            cout<<i<<endl<<fi<<endl;
            solve(nums, ans, fi + 1);
            swap(nums[fi], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int fi = 0;
        solve(nums, ans, fi);
        return ans;
    }
};
int main()
{
    Solution o;
    vector<int> v={123};
    o.permute(v);
}