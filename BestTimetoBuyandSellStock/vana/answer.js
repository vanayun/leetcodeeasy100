/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  let price = 0;
  for (let i = 0; i < prices.length; i++) {
    if (prices[i] < prices[i + 1]) {
      if (price < prices[i + 1] - prices[i]) {
        price = prices[i + 1] - prices[i];
      }
      prices[i + 1] = prices[i];
    }
  }
  return price;
};

// Input: [7,1,5,3,6,4]
// Output: 5

console.log(maxProfit([7, 1, 5, 3, 6, 4]));
