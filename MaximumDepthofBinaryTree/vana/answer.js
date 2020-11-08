/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var maxDepth = function (root) {
  let depth = 1;
  let maxd = 0;
  const isTree = (tree, treed) => {
    if (!tree.left && !tree.right) {
      maxd = maxd > treed ? maxd : treed;
    }

    treed++;
    if (tree.left) {
      isTree(tree.left, treed);
    }
    if (tree.right) {
      isTree(tree.right, treed);
    }
  };

  if (root) {
    isTree(root, depth);
  }
  return maxd;
};
