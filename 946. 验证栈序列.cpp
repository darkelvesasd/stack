class Solution {
public:
   bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    stack<int>stk;
    auto it = popped.begin();
    for (auto a : pushed)
    {
        stk.emplace(a);
        while (it != popped.end() &&!stk.empty() && stk.top() == (*it))
        {
            stk.pop();
            it++;
        }
    }
    if (it == popped.end())
    {
        return true;
    }
    return false;
}
};
