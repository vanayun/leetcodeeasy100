/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maximum_subarray.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:32:52 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/22 19:33:28 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int tmpsum;
        for (int i = 0; i < nums.size(); i++) {
            tmpsum = nums[i];
            if (tmpsum > sum)
                sum = tmpsum;
            for (int j = i + 1; j < nums.size(); j++) {
                tmpsum += nums[j];
                if (tmpsum > sum)
                    sum = tmpsum;
            }
         
        }
        return sum;
    }
};
