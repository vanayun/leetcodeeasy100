/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersection_of_two_linked_lists.cpp               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejpark <sejpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:24:35 by sejpark           #+#    #+#             */
/*   Updated: 2020/11/25 11:27:36 by sejpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    int list_length(ListNode *head) {
        int len = 0;
        while (head) {
            len++;
            head = head->next;
        }
        return (len);
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int idx_gap = list_length(headA) - list_length(headB);
        if (idx_gap > 0) {
            for (int i = 0; i < idx_gap; i++) {
                headA = headA->next;
            }
        }
        else {
            for (int i = 0; i < idx_gap * -1; i++) {
                headB = headB->next;
            }
        }
        while (headA && headB) {
            if (headA == headB)
                return (headA);
            headA = headA->next;
            headB = headB->next;
        }
        return (NULL); 
    }
};
