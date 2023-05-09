class MySolution {
public:
    int removeDuplicates(vector<int>& nums) {
        int beforeNum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (beforeNum == nums[i]) {
                nums.erase(nums.begin() + i--);
            } else {
                beforeNum = nums[i];
            }
        }
        return nums.size();
    }
};


class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int insertIndex = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] != nums[i]) {
                nums[insertIndex] = nums[i];
                insertIndex++;
            }
        }
        return insertIndex;
    }
};