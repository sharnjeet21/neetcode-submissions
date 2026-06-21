class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());

        int longest = 0;

        for(int num : numSet){
            if(numSet.find(num - 1) == numSet.end()){
                int curr = num;
                int streak = 1;

                while(numSet.find(curr + 1) != numSet.end()){
                    curr++;
                    streak++;
                }

                longest = max(longest, streak);
            }
        }

        return longest;

    }
};
