/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
  let answer = '';
  if(strs.length > 1) {
    strs.sort((a,b) => a.length - b.length);
    let cur = '', flag = true;
    for(let i=0; i<strs[0].length; i++) {
      let j=0;
      while(j < strs.length-1) {
        cur = strs[j].charAt(i);
        if(cur !== strs[j+1].charAt(i)) {
          flag = false;
          break;
        }
        j++;
      }
      if(flag) {
        answer+=cur;
      }else {
        break;
      }
    }
  } else {
    answer = strs.length ? strs[0] : '';
  }
  return answer;
};

// console.log(longestCommonPrefix(["flower","flow","flight"]));
console.log(longestCommonPrefix([]));
