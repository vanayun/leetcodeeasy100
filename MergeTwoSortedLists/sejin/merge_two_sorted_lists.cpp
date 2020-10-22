/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_two_sorted_lists.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:56:11 by sejpark           #+#    #+#             */
/*   Updated: 2020/10/22 20:56:27 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *result;
        ListNode *result_tail;
        result = NULL;
        result_tail = NULL;
        while (l1 != NULL || l2 != NULL) {
            if ((l1 != NULL && l2 == NULL) || (l1 && l2 &&l1->val <= l2->val)) {
                if (result == NULL) {
                    result = l1;
                    result_tail = l1;
                    l1 = l1->next;
                }
                else {
                    result_tail->next = l1; 
                    result_tail = result_tail->next;
                    l1 = l1->next;
                    result_tail->next = NULL;
                }
            } 
            else if ((l1 == NULL && l2 != NULL) || (l1 && l2 && l1->val > l2->val)) {
                if (result == NULL) {
                    result = l2;
                    result_tail = l2;
                    l2 = l2->next;
                }
                else {
                    result_tail->next = l2; 
                    result_tail = result_tail->next;
                    l2 = l2->next;
                    result_tail->next = NULL;
                }
            }
        }
        return result;
    }
};
