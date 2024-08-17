class Solution {
public:
    string removeDuplicates(string s) {
	string stk;
	char top = NULL;
	for (auto c : s)
	{
		if (top == c)
		{
			while (top == c)
			{
				stk.erase(stk.size() - 1);
				top = stk[max(0,(int)stk.size() - 1)];
			}
		}
		else
		{
			stk += c;
			top = stk[stk.size() - 1];
		}
	}
	return stk;
}
};
