/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_integer.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 18:41:25 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/16 18:42:11 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int reverse(int x) {
        long result = 0;
        int num;
        
        while(x) {
            num = x % 10;
            x /= 10;
            result = result * 10 + num;
        }
        if (result > 2147483647 || result < -2147483648)
            return 0;
        return result;
    }
};
