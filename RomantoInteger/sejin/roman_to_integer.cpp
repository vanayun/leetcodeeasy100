/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roman_to_integer.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 00:11:43 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/27 09:53:02 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        map<char, int> m;

        m.insert(pair<char, int>('I', 1));
        m.insert(pair<char, int>('V', 5));
        m.insert(pair<char, int>('X', 10));
        m.insert(pair<char, int>('L', 50));
        m.insert(pair<char, int>('C', 100));
        m.insert(pair<char, int>('D', 500));
        m.insert(pair<char, int>('M', 1000));

        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] < m[s[i + 1]]) {
                result += m[s[i + 1]] - m[s[i]];
                i++;
            }
            else {
                result += m[s[i]];
            }
        }
        return (result);
    }
};
