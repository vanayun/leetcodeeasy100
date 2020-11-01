var removeDuplicates = function (nums) {
  // console.log('1', ...new Set(nums));
  // nums.splice(0, nums.length, ...new Set(nums));

  let lastIndex = 0;
  for(let i=1; i<nums.length; i++) {
    if(nums[i] !== nums[lastIndex]) {
      nums[++lastIndex] = nums[i];
    }
  }
  
  return nums.length ? lastIndex + 1 : 0;
};

console.log('------------------------------------');
console.log(removeDuplicates([1, 1, 2]));
console.log('------------------------------------');
