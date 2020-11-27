/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   excel_sheet_column_number.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 11:21:33 by sejpark           #+#    #+#             */
/*   Updated: 2020/11/27 11:21:47 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int titleToNumber(string s) {
        unsigned int result = 0;
        int i = 0;
        while (i < s.size()) {
            result = result * 26 + s[i++] - 'A' + 1;
        }
        return (result);
    }
};
