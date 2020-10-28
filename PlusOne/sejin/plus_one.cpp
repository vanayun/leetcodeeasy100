/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus_one.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:12:25 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/28 21:12:35 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int chk;
        for (int i = digits.size() - 1; i >= 0; i--) {
            chk = digits[i];
            digits[i] = (digits[i] + 1) % 10;
            if (i != 0 && chk < 9)
                break;
            else if (i == 0 && chk == 9)
                digits.insert(digits.begin(), 1);
        }
        return (digits);
    }
};
