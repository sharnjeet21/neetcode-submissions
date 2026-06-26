class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()){
            return 0;
        }

        int left = 0, right = height.size() - 1;
        int leftMax = height[left], rightMax = height[right];
        int water = 0;

        while(left < right){
            if(leftMax < rightMax){
                left++;
                leftMax = max(leftMax, height[left]);
                water += max(0, leftMax - height[left]);
            }
            else{
                right--;
                rightMax = max(rightMax, height[right]);
                water += max(0, rightMax - height[right]);
            }
        }

        return water;
    }
};
