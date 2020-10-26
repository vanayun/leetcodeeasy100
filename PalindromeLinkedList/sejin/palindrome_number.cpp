/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrome_number.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 00:08:25 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/18 00:08:45 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        else {
            vector<int> arr;
            if (x == 0)
                return true;
            while (x) {
                arr.push_back(x % 10);
                x /= 10;
            }
            return chkArr(arr);
        }
    }
    bool chkArr(vector<int> &arr) {
        int length = arr.size();
        int i = 0;
        while (i < length / 2) {
            if (arr[i] != arr[length - i - 1])
                return false;
            i++;
        }
        return true;
    }
};
