/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_duplicates_from_sorted_array.cpp            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 23:39:59 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/26 23:42:54 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pre_idx = 0;
        for (int i = 1; i < nums.size(); i++) {
           if (nums[i] != nums[pre_idx]) {
               nums[++pre_idx] = nums[i];
           }
        }
        return nums.size() ? pre_idx + 1 : 0;
    }
};
