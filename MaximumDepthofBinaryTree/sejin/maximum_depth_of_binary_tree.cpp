/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maximum_depth_of_binary_tree.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:05:56 by sejpark           #+#    #+#             */
/*   Updated: 2020/11/02 14:06:13 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int result = 0;
    int maxDepth(TreeNode* root) {
        traverse_depth(root, 0);
        return (result);
    }
    
    void traverse_depth(TreeNode *node, int depth) {
        if (node == NULL) {
            result = depth > result ? depth : result;
            return ;
        }
        depth++;
        traverse_depth(node->left, depth);
        traverse_depth(node->right, depth);
    }
};
