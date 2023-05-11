class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        vector<int> temp(0);

        int nums1Index = m - 1;
        int nums2Index = n - 1;
        for (int i = m + n - 1; i >= 0 && nums1Index >= 0 && nums2Index >= 0; i--) {
            if (nums1[nums1Index] > nums2[nums2Index]) {
                nums1[i] = nums1[nums1Index--];
            } else {
                nums1[i] = nums2[nums2Index--];
            }
        }

        for (int i = nums2Index; i >= 0; i--) {
            nums1[i] = nums2[i];
        }
    }
};