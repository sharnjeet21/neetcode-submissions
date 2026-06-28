class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp = nums1;
        int count = 0;
        int i = 0, j = 0;
        while(i < m && j < n){
            if(temp[i] <= nums2[j]){
                nums1[count] = temp[i];
                i++;
            }
            else{
                nums1[count] = nums2[j];
                j++;
            }

            count++;
        }

        while(i < m){
           nums1[count] = temp[i];
           i++;
           count++;
        }
        while(j < n){
            nums1[count] = nums2[j];
            j++;
            count++;
        }
    }
};