/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   major_element.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:33:39 by sejpark           #+#    #+#             */
/*   Updated: 2020/11/26 12:33:51 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1;
        int major_idx = 0;
        int i = 1;
        while (i < nums.size()) {
            if (nums[major_idx] == nums[i])
                cnt++;
            else
                cnt--;
            if (cnt == 0) {
                cnt = 1;
                major_idx = i;
            }
            i++;
        }
        return (nums[major_idx]);
    }
};
