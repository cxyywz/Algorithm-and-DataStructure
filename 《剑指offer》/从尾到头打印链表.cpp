class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        if(head == nullptr)
            return res;
        stack<ListNode*> st;
        ListNode *cur = head;
        while(cur){
           st.push(cur);
            cur = cur->next;
        }
        while(!st.empty()){
           ListNode *p = st.top();
            res.push_back(p->val);
            st.pop();
        }
        return res;
    }
};
