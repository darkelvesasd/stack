string decodeString(string s) {
    stack<int>si;
    stack<string>ss;
    int tmp = 0;
    string ret;
    ss.emplace("");
    for (auto c : s)
    {
        if (c >= '0' && c <= '9')
        {
            tmp = tmp * 10 + c - '0';
        }
        else if (c == '[')
        {
            si.emplace(tmp);
            tmp = 0;
            ss.emplace("");
        }
        else if (c == ']')
        {
            int a = si.top();
            si.pop();
            string b = ss.top();
            ss.pop();
            string st="";
            for(int i=0;i<a;i++)
            {
                st += b;
            }
            ss.top() = ss.top() + st;
        }
        else
        {
            ss.top()=ss.top()+c;
        }
    }
    return ss.top();
}
