#include <bits/stdc++.h>

struct trains
{
    int start;
    int end;
    int pos;
};

bool compare(trains a, trains b)
{
    if (a.end < b.end)
        return 1;
    if (a.end > b.end)
        return 0;
    if (a.pos < b.pos)
        return 1;
    return 0;
}

int calculateMinPatforms(vector<int> at, vector<int> dt, int n)
{
    // Write your code here.
    vector<trains> a;
    for (int i = 0; i < n; i++)
    {
        trains t;
        t.start = at[i];
        t.end = dt[i];
        t.pos = i;
    }
    sort(a.begin(), a.end(), compare);

    vector<int> limits;
    limits.push_back(a[0].end);

    for (int i = 1; i < n; i++)
    {
        trains r = a[i];
        int l = INT_MAX;
        int lidx = INT_MAX;
        for (int j = 0; j < limits.size(); j++)
        {
            if (limits[j] < l)
            {
                l = limits[j];
                lidx = j;
            }
        }
        if (l == INT_MAX)
        {
            limits.push_back(r.end);
        }
        else
        {
            limits[lidx] = r.end;
        }
    }
    return limits.size();
}

int main()
{
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        for (int i = 0; i < n; i++)
            cin >> start[i];
        for (int i = 0; i < n; i++)
            cin >> end[i];
        cout << calculateMinPatforms(start, end) << endl;
    }
    return 0;
}