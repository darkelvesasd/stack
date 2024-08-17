class Solution {
public:
string removeDuplicates(string s) {
	string stk;
	for (auto c : s)
	{
		if (stk.size()&&c == stk.back()  )
		{
			stk.pop_back();
		}
		else
		{
			stk += c;
		}
	}
	return stk;
}
};
