/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   climbing_stairs.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 11:59:20 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/29 11:59:55 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int climbStairs(int n) {
        vector<unsigned int> arr;
        arr.push_back(1);
        arr.push_back(2);
        return sol(arr, n);
    }
    
    int sol(vector<unsigned int> &arr, int n) {
        for (int i = 2; i <= n; i++) {
            arr.push_back(arr[i - 1] + arr[i - 2]);
        }
        return arr[n - 1];
    }
};
