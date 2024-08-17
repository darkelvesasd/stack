class Solution {
public:
    int calculate(string s) {
	vector<int> stk;
	long long sum = 0;
	char op = '+';
	long long tmp = 0;
	int sn = s.size();
	for (int i = 0; i < sn; i++)
	{
		char c = s[i];
		if (c != ' ')
		{
			if (c >= '0' && c <= '9')
			{
				tmp = tmp * 10 + c - '0';
			}
			else
			{
				switch (op)
				{
				case'+':
					stk.emplace_back(tmp);
					break;
				case'-':
					stk.emplace_back(-tmp);
					break;
				case'*':
					stk[stk.size() - 1] = stk.back() * tmp;
					break;
				case'/':
					stk[stk.size() - 1] = stk.back() / tmp;
					break;
				}
				tmp = 0;
				op = c;
			}
		}
		if (i == s.size() - 1)
		{
			switch (op)
			{
			case'+':
				stk.emplace_back(tmp);
				break;
			case'-':
				stk.emplace_back(-tmp);
				break;
			case'*':
				stk[stk.size() - 1] = stk.back() * tmp;
				break;
			case'/':
				stk[stk.size() - 1] = stk.back() / tmp;
				break;
			}
			for (auto a : stk)
			{
				sum += a;
			}
		}
	}
	return sum;
}
};
