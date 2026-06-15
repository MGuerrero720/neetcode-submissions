class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        set<int> n;

        for(int i : nums){
            n.insert(i);
        }

        int n_s = n.size();
        int nums_s = nums.size();

        if(n_s != nums_s){
            return true;
        }
        return false;    
    }
};