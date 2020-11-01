/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

function ListNode(val, next) {
  this.val = val === undefined ? 0 : val;
  this.next = next === undefined ? null : next;
}
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function (head) {
  // let curr = head;
  // const traverse = (node) => {
  //   if (node === null) {
  //     return true;
  //   }
  //   // traverse to the end of the list first
  //   const prevIsSame = traverse(node.next);
  //   // when the call stack bounces back, compare the values
  //   // from the head and from the bottom up
  //   const currIsSame = curr.val === node.val;
  //   curr = curr.next;
  //   return prevIsSame && currIsSame;
  // };
  // return traverse(head);

    let headList = [];
  
    while(head !== null) {
      headList.push(head.val);
      head = head.next;
    }
  
    for(let i=0; i<headList.length/2; i++) {
      if(headList[i] !== headList[headList.length - 1 - i]) {
        return false;
      }
    }
    return true;
}
