/**
 * @param {number} n
 * @return {number}
 */
// let seen = {};
//    var climbStairs = function(n) {
//       if(n < 3) return n;
//       if(!(n in seen)) {
//          console.log('n:', n, seen);
//          seen[n] = climbStairs(n-1) + climbStairs(n-2);
//          console.log(seen);
//       }
//    return seen[n];
// };

//피보나치 수열 공식으로 품
var climbStairs = function (n) {
  if (n == 1) return 1;
  let dp = new Array(n + 1); // n = 4, arr(5)
  dp[1] = 1;
  dp[2] = 2;

  for (let i = 3; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
    console.log(dp[i]);
  }
  return dp[n];
};

console.log(climbStairs(4));
// 1111,121,211,112,22
