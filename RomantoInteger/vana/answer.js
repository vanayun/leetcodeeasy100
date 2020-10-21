/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    
  let answer = 0;
  const roman = new Map();
  roman.set('I', 1);
  roman.set('V', 5);
  roman.set('X', 10);
  roman.set('L', 50);
  roman.set('C', 100);
  roman.set('D', 500);
  roman.set('M', 1000);
  
  for(let i=0; i<s.split('').length; i++) { 
    if(roman.get(s[i]) < roman.get(s[i+1])) {
      answer += roman.get(s[i+1]) - roman.get(s[i]);
      i++;
    } else {
      answer+=roman.get(s[i]);
    }
  }
  return answer;
};

console.log(romanToInt('CXL'));