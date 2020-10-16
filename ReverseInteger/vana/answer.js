/**
 * @param {number} x
 * @return {number}
   pow 는 특정숫자의 거듭제곱 값을 계산해주는 함수이며,
   sqrt 는 특정숫자의 제곱근 값을 계산해주는 함수입니다.
 */
var reverse = function(x) {
  let answer = x + '';
  answer = answer.split("").reverse().join("");
  if(x < 0) {
      answer = '-' + answer.replace('-', '');
      answer = Number(answer);
  }
  
  if(answer > Math.pow(2, 31) || answer < Math.pow(-2, 31)) {
      return 0;
  } else {
      return answer;
  }
};

console.log(reverse(2147483648));