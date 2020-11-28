/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorial_trailing_zeroes.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 11:22:44 by sejpark           #+#    #+#             */
/*   Updated: 2020/11/27 11:22:54 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int trailingZeroes(int n) {
        pair<int, int>two_five(0, 0);
        int idx = n;
        int num = n;
        while (idx) {
            num = idx;
            while (num % 2 == 0 || num % 5 == 0) {
                if (num % 2 == 0) {
                    two_five.first++;
                    num /= 2;
                }
                if (num % 5 == 0) {
                    two_five.second++;
                    num /= 5;
                }
            }
            idx--;
        }
        return (two_five.first < two_five.second ? two_five.first : two_five.second);
    }
};
