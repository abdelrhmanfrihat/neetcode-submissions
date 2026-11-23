class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();
        int n2 = n * 2;
        vector <int> ans(n2);

        for(int i = 0; i < n2; i++){
            ans[i] = nums[i % n];
            
        }

        return ans;
    }
};
