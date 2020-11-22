/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  let answer = 0;

  for (let i = 0; i < prices.length; i++) {
    if (prices[i] < prices[i + 1]) {
      answer += prices[i + 1] - prices[i];
    }
  }

  return answer;
};

console.log(maxProfit([7, 1, 5, 3, 6, 4]));
