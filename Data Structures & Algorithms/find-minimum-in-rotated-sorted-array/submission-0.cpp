class Solution {
public:
    int findMin(vector<int> &nums) {
        int res = nums[0];
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            if (nums[left] < nums[right]) {
                res = min(res, nums[left]);
                break;
            }
            int middle = (left + right) / 2;
            res = min(res, nums[middle]);
            if (nums[middle] > nums[right]) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        } 
        return res;
    }
};
