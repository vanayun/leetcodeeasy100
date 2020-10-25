// /**
//  * @param {string[]} strs
//  * @return {string}
//  */
// var longestCommonPrefix = function(strs) {
//   let answer = '';
//   if(strs.length > 1) {
//     strs.sort((a,b) => a.length - b.length);
//     let cur = '', flag = true;
//     for(let i=0; i<strs[0].length; i++) {
//       let j=0;
//       while(j < strs.length-1) {
//         cur = strs[j].charAt(i);
//         if(cur !== strs[j+1].charAt(i)) {
//           flag = false;
//           break;
//         }
//         j++;
//       }
//       if(flag) {
//         answer+=cur;
//       }else {
//         break;
//       }
//     }
//   } else {
//     answer = strs.length ? strs[0] : '';
//   }
//   return answer;
// };

/**
 * @param {string[]} strs
 * @return {string}
 */

// var longestCommonPrefix = function (strs) {
//   let answer = '';
//   const shortStrsLength = strs.length
//     ? strs.sort((a, b) => a.length - b.length)[0].length
//     : 0;

//   for (let i = 0; i < shortStrsLength; i++) {
//     let a = strs[0][i];
//     for (let j = 1; j < strs.length; j++) {
//       if (a !== strs[j][i]) {
//         return answer;
//       }
//     }
//     answer += a;
//   }
//   return answer;
// };

var longestCommonPrefix = function (strs) {
  if (!strs.length) return '';
  let answer = '';
  let firstElm = strs[0];
  for (let i = 0; i < firstElm.length; i++) {
    for (let j = 1; j < strs.length; j++) {
      if (firstElm[i] !== strs[j][i]) {
        return answer;
      }
    }
    answer += firstElm[i];
  }
  return answer;
};

console.log(
  longestCommonPrefix(['flower', 'flow', 'flight'])
);
console.log(longestCommonPrefix([]));
