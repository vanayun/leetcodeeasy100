/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function (numRows) {
  let arrAnswer = [];
  for (let i = 0; i < numRows; i++) {
    let sumArr = [1];
    for (let j = 1; j < i + 1; j++) {
      if (j > 0 && j < i) {
        sumArr.push(
          arrAnswer[i - 1][j - 1] + arrAnswer[i - 1][j]
        );
      } else {
        sumArr.push(1);
      }
    }
    arrAnswer.push(sumArr);
  }
  return arrAnswer;
};

console.log('------------------------------------');
console.log(generate(5));
console.log('------------------------------------');
