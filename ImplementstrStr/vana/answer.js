/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function (haystack, needle) {
  const needleLength = needle.length;
  if (needleLength === 0) return 0;
  for (let i = 0; i < haystack.length; i++) {
    if (haystack.substring(i, i + needleLength) === needle) {
      return i;
    }
  }
  return -1;
};

console.log(strStr("hello", "ll"));
console.log(strStr("aaaaa", "bba"));
console.log(strStr("", ""));