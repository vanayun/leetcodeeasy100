/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_and_say.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:40:42 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/28 18:40:54 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        else 
            return (cal(countAndSay(n - 1)));
    }
    
    string cal(const string &str) {
        string result;
        char cur = str[0];
        int cnt = 1;
        
        for (int i = 1; i < str.size(); i++) {
            if (cur == str[i])
                cnt++;
            else {
                result = result + to_string(cnt) + cur;
                cur = str[i];
                cnt = 1;
            }
        }
        result = result + to_string(cnt) + cur;
        return result;
    }
};
