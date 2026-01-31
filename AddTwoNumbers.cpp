#include <iostream>
#include <string.h>






using namespace std ;



 // Definition for singly-linked list.
/*

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
               1  1  1  1
            9  9  9  9  9  9  9
            9  9  9  9
            8  9  9  9  0  0  0  1
Output: [8,9,9,9,0,0,0,1]

 */
  struct ListNode {
     int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
          if (l1 == nullptr && l2 == nullptr)
              return nullptr;

          ListNode* resultSumNodes = l1;
          ListNode* head = resultSumNodes;
          ListNode* secondlist = l2;

          int carryout = 0;

          int nl1 = getLengthList(l1);
          int nl2 = getLengthList(l2);
          int maxLength = (nl1 > nl2) ? nl1 : nl2;


          for (int  i = 0; i < maxLength; i++)
          {
            int v1 = (l1 != nullptr) ? l1->val : 0;  

             int v2 = (secondlist != nullptr) ? secondlist->val : 0; 

             int sum = v1 + v2 + carryout;                  

                resultSumNodes->val = sum % 10;           
                carryout = sum / 10;                           

                if (i < maxLength - 1) {                   
                    if (l1 != nullptr && l1->next != nullptr) {
                        resultSumNodes->next = l1->next;
                    } else {
                        resultSumNodes->next = new ListNode(0);
                    }
                    resultSumNodes = resultSumNodes->next;
                }


                if (l1 != nullptr) l1 = l1->next;
                if (secondlist != nullptr) secondlist = secondlist->next;   
            
          }
                    

                  if (carryout == 1)
                   {                             
                        resultSumNodes->next = new ListNode(1);
                   }
  

         return head  ;
    }


    private:
    int getLengthList(ListNode * l)
    {
            int  count = 0  ;
            ListNode * temp  = l ;

            while (temp != nullptr)
            {
              count++ ;
              temp =temp->next  ;

            }
            
            return count ;
    }
public:
        void printList(ListNode * l)
    {
           
            ListNode * temp  = l ;

            while (temp != nullptr)
            {
            
            cout<<temp->val <<"    "  ;
              temp = temp->next  ;

            }
            
            
    }

} ;



int main()
{

    ListNode * list_1_head = nullptr ;
  ListNode * list_2_head = nullptr ;
    for (int  i = 1; i <8; i++)
    {
        ListNode *stNode1 = new ListNode(i);

    stNode1->next = list_1_head;
    list_1_head = stNode1;
    }

       for (int  i = 1; i <5; i++)
    {
        ListNode *stNode2 = new ListNode(9);

    stNode2->next = list_2_head;
    list_2_head = stNode2;
    }
    
    Solution sol  ;
//     sol.printList(list_1_head)  ;

// cout<<"\n\n"   ;
//         sol.printList(list_2_head)  ;



 ListNode *  result =      sol.addTwoNumbers(list_1_head,list_2_head)  ;

while (result != nullptr)
{
  cout<<result->val  <<"   " ;
  result = result->next  ;
}

   
   cout<<"\n\n\n"  ;
    return 0 ;
}