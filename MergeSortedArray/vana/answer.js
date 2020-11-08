/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function (nums1, m, nums2, n) {
  let i = 0;
  while (i < n) {
    nums1[m + i] = nums2[i];
    i++;
  }

  return nums1.sort((a, b) => a - b);
};

console.log('------------------------------------');
console.log(merge([1, 2, 3, 0, 0, 0], 3, [2, 5, 6], 3));
console.log('------------------------------------');
//[1,2,2,3,5,6]
