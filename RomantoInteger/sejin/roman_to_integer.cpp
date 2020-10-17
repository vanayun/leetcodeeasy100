/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roman_to_integer.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 00:11:43 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/18 00:12:15 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int romanToInt(string s) {
        int i = 0;
        int result = 0;
        while (s[i]) {
            result += M(s, &i);
            result += D(s, &i);
            result += C(s, &i);
            result += L(s, &i);
            result += X(s, &i);
            result += V(s, &i);
            result += I(s, &i);
        }
        return result;
    }
    int I(string &s, int *idx) {
        int sum = 0;
        while (1) {
            if (s[*idx] == 'I') {
                sum++;
                (*idx)++;
            }
            else if (s[*idx] == 'V') {
                sum = 4;
                (*idx)++;
            }
            else if (s[*idx] == 'X') {
                sum = 9;
                (*idx)++;
            }
            else
                break;
        }
        return sum;
    }
    int V(string &s, int *idx) {
        int sum = 0;
        while (1) {
            if (s[*idx] == 'V') {
                sum += 5;
                (*idx)++;
            }
            else
                break;
        }
        return sum;
    }
    int X(string &s, int *idx) {
        int sum = 0;
        while (1) {
            if (s[*idx] == 'X') {
                sum += 10;
                (*idx)++;
            }
            else if (s[*idx] == 'L') {
                sum = 40;
                (*idx)++;
            }
            else if (s[*idx] == 'C') {
                sum = 90;
                (*idx)++;
            }
            else
                break;
        }
        return sum;
    }
    int L(string &s, int *idx) {
        int sum = 0;
        while (1) {
            if (s[*idx] == 'L') {
                sum += 50;
                (*idx)++;
            }
            else
                break;
        }
        return sum;
    }
    int C(string &s, int *idx) {
        int sum = 0;
        while (1) {
            if (s[*idx] == 'C') {
                sum += 100;
                (*idx)++;
            }
            else if (s[*idx] == 'D') {
                sum = 400;
                (*idx)++;
            }
            else if (s[*idx] == 'M') {
                sum = 900;
                (*idx)++;
            }
            else
                break;
        }
        return sum;
    }
    int D(string &s, int *idx) {
        int sum = 0;
        while (1) {
            if (s[*idx] == 'D') {
                sum += 500;
                (*idx)++;
            }
            else
                break;
        }
        return sum;
    }
    int M(string &s, int *idx) {
        int sum = 0;
        while (1) {
            if (s[*idx] == 'M') {
                sum += 1000;
                (*idx)++;
            }
            else
                break;
        }
        return sum;
    }
};
