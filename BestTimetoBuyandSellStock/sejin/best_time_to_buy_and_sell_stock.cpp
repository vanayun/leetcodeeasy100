/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_time_to_buy_and_sell_stock.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 18:25:40 by sejpark           #+#    #+#             */
/*   Updated: 2020/11/14 18:25:46 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        
        for (int i = 0; i < prices.size() - 1 && prices.size(); i++){
            if (prices[i] < prices[i + 1]) {
                if (profit < prices[i + 1] - prices[i])
                    profit = prices[i + 1] - prices[i];
                prices[i + 1] = prices[i];
            }
        }
        return (profit);
    }
};
