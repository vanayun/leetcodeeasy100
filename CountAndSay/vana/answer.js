/**
 * @param {number} n
 * @return {string}
 */

var countAndSay = function (n) {
  let str = '1';
  for (let i = 1; i < n; i++) {
    let strArr = str.split('');
    str = '';
    let count = 1;
    for (let j = 0; j < strArr.length; j++) {
      if (strArr[j] !== strArr[j + 1]) {
        str += count + strArr[j];
        count = 1;
      } else {
        count++;
      }
    }
  }
  return str;
};

console.log(countAndSay(5));

// 1 : 1
// 2 : 11
// 3 : 21
// 4 : 1211
