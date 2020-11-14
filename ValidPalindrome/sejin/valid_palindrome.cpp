/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_palindrome.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 20:11:00 by sejpark           #+#    #+#             */
/*   Updated: 2020/11/14 20:11:03 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    bool isPalindrome(string s) {
       string result;
       int len;
       for (int i = 0; i < s.size(); i++) {
           if (isalnum(s[i]))
               result.push_back(tolower(s[i]));
       }
       len = result.size() / 2;
       for (int i = 0; i < len; i++) {
           if (result[i] != result[result.size() - i - 1])
               return (false);
       }
       return (true); 
    }
};
