#include <stack>
#include <iostream>
#include <string>

using namespace std;

int calc(string s)
{
        stack<string> a;
        string tt = "";
        int i = 0;
        for(; i < s.length(); i++){
                if(s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-'){
                        break;
                }
                tt += s[i];
        }
        a.push(tt);
        while (i != s.length() && !a.empty())
        {
                if (s[i] == "*")
                {
                        string temp = "";
                        i++;
                        for (; i < s.length(); i++)
                        {
                                if (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/')
                                {
                                        break;
                                }
                                temp += s[i];
                        }
                        int x = stoi(a.top());
                        a.pop();
                        int y = stoi(temp);
                        cout << "mul = " <<  x * y << endl;
                        a.push(to_string(x * y));
                        i++;
                }
                else if (s[i] == "/")
                {
                        // int x = stoic(a.pop());
                        string temp = "";
                        i++;
                        for (; i < s.length(); i++)
                        {
                                if (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/')
                                {
                                        break;
                                }
                                temp += s[i];
                        }
                        int x = stoi(a.top());
                        a.pop();
                        int y = stoi(temp);
                        a.push(to_string(x / y));
                        cout << "mul = " << x / y << endl;
                        i++;
                }
                else if (s[i] == "+")
                {
                        a.push("+");
                        string temp = "";
                        i++;
                        for (; i < s.length(); i++)
                        {
                                if (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/')
                                {
                                        break;
                                }
                                temp += s[i];
                        }
                        a.push(temp);
                        i++;
                }
                else if (s[i] == "-")
                {
                        a.push("-");
                        string temp = "";
                        i++;
                        for (; i < s.length(); i++)
                        {
                                if (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/')
                                {
                                        break;
                                }
                                temp += s[i];
                        }
                        a.push(temp);
                        i++;
                }
        }
        while (!a.empty())
        {
                string t = a.top();
                a.pop();
                cout << t << endl;
        }
        return 1;
}

int main()
{
        string s;
        cin >> s;
        cout << calc(s) << endl;
        return 0;
}