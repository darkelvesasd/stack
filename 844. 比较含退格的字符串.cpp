class Solution {
public:
   bool backspaceCompare(string s, string t) {
	string stk1;
	string stk2;
	for (auto c : s)
	{
		if (c == '#'&&stk1.size())
		{
			stk1.pop_back();
		}
		else if(c!='#')
		{
			stk1 += c;
		}
	}
	for (auto c : t)
	{
		if (c == '#' && stk2.size())
		{
			stk2.pop_back();
		}
		else if (c != '#')
		{
			stk2 += c;
		}
	}
	return !stk1.compare(stk2);
}
};
