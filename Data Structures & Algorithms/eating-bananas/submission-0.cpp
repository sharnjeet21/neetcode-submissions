class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 0;

        int result = 0;

        for(int p : piles){
            right = max(p, right);
        }

        while(left <= right){
            int mid = left + (right - left) / 2;

            long long hours = 0;
            
            for (int p : piles) {
                hours += (p + mid - 1) / mid;
            }
            
            if (hours <= h) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        return result;
    }
        
};
