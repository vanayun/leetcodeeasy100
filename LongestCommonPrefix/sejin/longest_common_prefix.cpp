/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest_common_prefix.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:22:53 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/19 18:23:21 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int strsLength = strs.size();
        int shortestWordLength = getShortestWordLength(strs, strsLength);
        
        for (int i = 0; i < shortestWordLength; i++) {
            char a = strs[0][i];
            for (int j = 1; j < strsLength; j++) {
                if (strs[j][i] != a)
                    return result;
            }
            result += a;
        }
        return result;
    }
    
    int getShortestWordLength(vector<string>& strs, int strsLength) {
        int length = strs.size() == 0 ? 0 : strs[0].size();
        
        for (int i = 1; i < strsLength; i++) {
            if (strs[i].size() < length)
                length = strs[i].size();
        }
        return length;
    }
};
