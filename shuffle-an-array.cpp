class Solution {
private:
    vector<int> originalNums;
    vector<int> nums;

    void swap(int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

public:
    Solution(vector<int> &nums) {
        for (int i = 0; i < nums.size(); i++) {
            originalNums.push_back(nums[i]);
        }
        this->nums = nums;
    }

    vector<int> reset() {
        copy(originalNums.begin(), originalNums.end(), nums.begin());
        return originalNums;
    }

    vector<int> shuffle() {
        for (int i = 0; i < nums.size(); i++) {
            int randomIndex = rand() % nums.size();
            this->swap(i, randomIndex);
        }
        return nums;
    }
};