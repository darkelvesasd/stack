class Solution {
public:
   string multiply(string num1, string num2) {
	if (num2 == "")
	{
		return num1;
	}
	string ret;
	int acc = 0;
	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());
	int n1 = num1.size();
	int n2 = num2.size();
	vector<int>nums(n1+n2);
	for (int i=0;i<n1;i++)
	{
		for (int j=0;j<n2;j++)
		{
			nums[i + j] += (num1[i]-'0') * (num2[j]-'0');
		}
	}
	int n = nums.size();
	for (int i=0;i<n;i++)
	{
			ret +=(acc+ nums[i]) % 10 + '0';
			acc = (acc + nums[i]) / 10;
	}
	while (acc)
	{
		ret += acc % 10 + '0';
		acc /= 10;
	}
	int begin = 0;
	reverse(ret.begin(), ret.end());
	while (ret[begin] == '0')
	{
		begin++;
	}
    if (begin==ret.size())
		return "0";
	return ret.substr(begin,ret.size()-begin);
}
};
