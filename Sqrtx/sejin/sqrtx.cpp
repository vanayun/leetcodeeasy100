/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqrtx.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 10:38:12 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/29 10:38:24 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int mySqrt(int x) {
        unsigned int idx = 0;
        while (idx * idx <= (unsigned int)x) {
            idx++;
        }
        return idx - 1;
    }
};
