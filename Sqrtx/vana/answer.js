/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function (x) {
  if (x === 0) return 0;
  for (let i = 1; i <= x; i++) {
    if (i * i >= x) {
      return i;
    } else if (i * i < x && (i + 1) * (i + 1) > x) {
      return i;
    }
  }

  // let res = 1;
  // while (res*res < x) {
  //     res += 1;
  // }
  // return res*res > x ? res-1 : res;
};

console.log('------------------------------------');
console.log(mySqrt(2));
console.log('------------------------------------');
