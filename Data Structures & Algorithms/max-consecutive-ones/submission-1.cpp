class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int mcount = 0;
        for(int num : nums){
            if(num == 1){
                count++;
                mcount = max(count, mcount);
            }
            else{
                count = 0;
            }
        }

        return mcount;
    }
};