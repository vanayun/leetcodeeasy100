/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
  // let answer = false;
  // const brackets = s.split('').map(b => b.charCodeAt());
  // if(brackets.length % 2 === 0) {
  //   console.log(brackets);
  //   for(let b = 0; b< Math.sqrt(brackets.length); b++) {
  //     console.log(brackets[b], brackets[brackets.length-(b+1)]);
  //     const offset = Math.abs(brackets[b] - brackets[brackets.length-(b+1)]);
  //     if(offset === 0 || offset > 2) {
  //       answer = false;
  //     } else {
  //       answer = true;
  //     }
  //   }
  // }else {
  //   answer = false;
  // }

  let stack = [];

  for (let i = 0; i < s.length; i++) {
    if (['(', '{', '['].indexOf(s[i]) > -1) {
      stack.push(s[i]);
      console.log(stack);
    } else {
      console.log(stack);
      if (s[i] === ')' && stack[stack.length - 1] !== '(') {
        return false;
      }
      if (s[i] === '}' && stack[stack.length - 1] !== '{') {
        return false;
      }
      if (s[i] === ']' && stack[stack.length - 1] !== '[') {
        return false;
      }
      stack.pop(stack.length - 1);
    }
  }
  return stack.length > 0 ? false : true;
};

console.log(isValid('{[]}'));
console.log(isValid('([)]'));
console.log(isValid('()[]{}'));
console.log(isValid('(]'));
console.log(isValid('(('));
console.log(isValid('(){}}{'));
