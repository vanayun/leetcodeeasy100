/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {
  let answer = true;
  const alphabetString = s
    .toLowerCase()
    .split('')
    .filter((val) => /^[a-zA-Z0-9]+$/.test(val))
    .join('');

  for (let i = 0; i < alphabetString.length; i++) {
    console.log(
      alphabetString[i],
      alphabetString[alphabetString.length - (i + 1)]
    );
    if (
      alphabetString[i] !==
      alphabetString[alphabetString.length - (i + 1)]
    ) {
      answer = false;
    }
  }
  return answer;
};

console.log(isPalindrome('ab'));
console.log(isPalindrome('0p'));
console.log(isPalindrome('A man, a plan, a canal: Panama'));
