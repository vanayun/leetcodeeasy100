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
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var mergeTwoLists = function (l1, l2) {
  // function merge(left, right) {
  //   if (!left) return right;
  //   if (!right) return left;

  //   if (left.val < right.val) {
  //     left.next = merge(left.next, right);
  //     return left;
  //   }
  //   right.next = merge(left, right.next);
  //   return right;
  // }
  // return merge(l1, l2);

  /**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

  if(l1 === null) return l2;
  if(l2 === null) return l1;
    
  let head = null;
  let tail = null;
  
  if(head === null) {
    if(l1.val < l2.val) {
      head = l1;
      l1 = l1.next;
    } else {
      head = l2;
      l2 = l2.next;
    }
    tail = head;
  }
  
  while(l1 && l2) {
    if(l1.val < l2.val) {
      tail.next = l1;
      l1 = l1.next;
      tail = tail.next;
    }else {
      tail.next = l2;
      l2 = l2.next;
      tail = tail.next;
    }
  }
  
  tail.next = l1 || l2;
    
  return head;
};

console.log('------------------------------------');
console.log(mergeTwoLists([1, 2, 4], [1, 3, 4]));
console.log('------------------------------------');
