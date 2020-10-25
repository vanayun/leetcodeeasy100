/**
 * @param {number} x
 * @return {number}
   pow 는 특정숫자의 거듭제곱 값을 계산해주는 함수이며,
   sqrt 는 특정숫자의 제곱근 값을 계산해주는 함수입니다.
 */
var reverse = function (x) {
  let answer = 0;
  // answer = answer.split("").reverse().join("");
  // if(x < 0) {
  //     answer = '-' + answer.replace('-', '');
  //     answer = Number(answer);
  // }

  // 245 -> 542
  let num = 0;
  while (x) {
    num = x % 10; // 245 % 10 = 5
    x = parseInt(x / 10); // x 값 변화 x = 24
    answer = answer * 10 + num; // answer = 0 = 0 * 10 + 5 = 5
  }
  if (
    answer > Math.pow(2, 31) ||
    answer < Math.pow(-2, 31)
  ) {
    return 0;
  } else {
    return answer;
  }
};

// console.log(reverse(2147483648));
console.log(reverse(-123));
