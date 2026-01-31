#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int getLength(ListNode* head) {
        int count = 0;
        ListNode* current = head;

        while (current != nullptr) {
            count++;
            current = current->next;
        }

        return count;
    }

    bool isPalindrome(ListNode* head) {
        if (head == nullptr) return false;
        if (head->next == nullptr) return true;

        int n = getLength(head);   
        ListNode* first = head;

        for (int i = 1; i <= n / 2; i++) {   

            ListNode* last = head;         
            int steps = n - i;              //    
            for (int j = 0; j < steps; j++) {
                last = last->next;
            }

            if (last->val != first->val) {
                return false;
            }

            first = first->next;
        }

        return true;
    }
};

int main() {
    cout << "======================================================================\n";
    cout << "===             Palindrom    LinkedList using c++ languages App   ====\n";
    cout << "======================================================================\n";

    // palidrom linkedlist
    ListNode* stNode = new ListNode(1);
    stNode->next = new ListNode(2);
    stNode->next->next = new ListNode(2);
    stNode->next->next->next = new ListNode(1);

    Solution sol;

    if (sol.isPalindrome(stNode)) {
        cout << "is palindrom" << endl;
    } else {
        cout << "is not palindrom" << endl;
    }

    return 0;
}
