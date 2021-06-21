#include <iostream>
#include <string>

using namespace std;

class big
{
public:
    string a;

public:
    big() {}
    big(string number)
    {
        a = number;
    }
    big operator+(big &b)
    {
        bool isNeg = (b.a[0] == '-') ? 1 : 0;
        int l = min(a.size(), b.a.size());
        big c;
        if (a.size() > b.a.size())
        {
            c.a = a;
            l = b.a.size();
        }
        else
        {
            c.a = b.a;
            l = a.size();
        }
        for (int i = l - 1; i >= 0; i--)
        {
            bool carry = 0;
            int main_part = 0;
            int sum = int(a[i]) + int(b.a[i]) - 96;
            if (sum >= 10)
            {
                carry = 1;
                main_part = sum % 10;
            }
            else
            {
                main_part = sum;
            }
            cout << sum << ":";
            if (!carry)
            {
                c.a[i] = char(main_part+48);
            }
        }
        cout << endl;
        cout << "aasd " << c << endl;
        return c;
    }
    friend ostream &operator<<(ostream &os, const big &b);
    friend istream &operator>>(istream &in, const big &c);
};

ostream &operator<<(ostream &os, const big &b)
{
    os << b.a;
    return os;
}

istream &operator>>(istream &in, big &b)
{
    in >> b.a;
    return in;
}

int main()
{
    big a;
    big c;
    cin >> a;
    cout << a << endl;
    cin >> c;
    cout << c << endl;
    cout << c + a << endl;
    return 0;
}