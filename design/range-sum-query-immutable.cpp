class NumArray {
private:
    vector<int> prefixSum;

public:
    NumArray(vector<int>& nums) {
        prefixSum.resize(nums.size());
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            prefixSum[i] = sum;
        }
    }

    int sumRange(int left, int right) {
        if (left == 0) {
            return prefixSum[right];
        } else {
            return prefixSum[right] - prefixSum[left - 1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */