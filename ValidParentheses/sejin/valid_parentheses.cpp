/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_parentheses.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:09:09 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/19 19:09:15 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack.push_back(s[i]);
            else {
                if (stack.size() == 0)
                    return false;
                if (stack[stack.size() - 1] == '(' && s[i] != ')')
                    return false;
                if (stack[stack.size() - 1] == '{' && s[i] != '}')
                    return false;
                if (stack[stack.size() - 1] == '[' && s[i] != ']')
                    return false;
                stack.pop_back();
            }
        }
        return stack.size() == 0 ? true : false;
    }
};
