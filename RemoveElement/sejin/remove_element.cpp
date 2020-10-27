/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_element.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 12:00:01 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/27 12:00:09 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] != val) {
                nums[idx++] = nums[i];
            }
            else if (i + 1 < nums.size() && nums[i + 1] != val) {
                nums[idx++] = nums[i + 1];
                i++;
            }
            i++;
        }
        return idx;
    }
};
