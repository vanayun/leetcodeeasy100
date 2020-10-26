var removeDuplicates = function (nums) {
  console.log('1', ...new Set(nums));
  nums.splice(0, nums.length, ...new Set(nums));
};

console.log('------------------------------------');
console.log(removeDuplicates([1, 1, 2]));
console.log('------------------------------------');
