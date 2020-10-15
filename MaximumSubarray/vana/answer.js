/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
  let maxSum = nums[0];

  if (nums.length === 1) {
    return nums[0];
  }

  for (var i = 1; i < nums.length; i++) {
    if (nums[i - 1] > 0) {
      nums[i] += nums[i - 1];
    }

    if (maxSum < nums[i]) {
      maxSum = nums[i];
    }
  }

  return maxSum;
};

const result = maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]);
console.log(result);
