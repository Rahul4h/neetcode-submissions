class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] == target) {
                return true;
            }

            // Duplicates ki wajah se sorted half identify nahi kar sakte
            if (nums[l] == nums[mid] && nums[mid] == nums[h]) {
                l++;
                h--;
                continue;
            }

            // Left half sorted hai
            if (nums[l] <= nums[mid]) {
                if (nums[l] <= target && target < nums[mid]) {
                    h = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            // Right half sorted hai
            else {
                if (nums[mid] < target && target <= nums[h]) {
                    l = mid + 1;
                } else {
                    h = mid - 1;
                }
            }
        }

        return false;
    }
};