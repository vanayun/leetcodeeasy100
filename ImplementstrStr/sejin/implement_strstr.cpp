/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   implement_strstr.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 17:46:10 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/27 17:46:17 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0)
            return 0;
        int cur = 0;
        int needle_idx = 0;
        while (haystack[cur] && haystack.size() - cur >= needle.size()) {
            needle_idx = 0;
            while (needle[needle_idx]) {
                if (haystack[cur + needle_idx] != needle[needle_idx]) {
                    break ;
                }
                needle_idx++;
                if (needle[needle_idx] == '\0')
                    return cur;
            }
            cur++;
        }
        return -1;
    }
};
