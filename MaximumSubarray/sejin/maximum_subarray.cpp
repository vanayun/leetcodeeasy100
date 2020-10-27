/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maximum_subarray.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:32:52 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/27 10:02:51 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        int sum = 0;
        if (nums.size() == 1) {
            return max;
        }
        for(int i = 0; i < nums.size(); i++) {
            if (sum > 0) {
                sum += nums[i];
            }
            else {
                sum = nums[i];
            }
            if (max < sum) {
                max = sum;
            }
        }
        return max;
    }
};
