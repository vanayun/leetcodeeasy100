/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pascals_triangle.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:35:39 by sejpark           #+#    #+#             */
/*   Updated: 2020/11/14 17:36:12 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (j == 0 || j == i)
                    result[i].push_back(1);
                else
                    result[i].push_back(result[i - 1][j - 1] + result[i - 1][j]);
            }
        }
        return result;
    }
};
