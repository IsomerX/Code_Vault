#include <bits/stdc++.h>

using namespace std;

int main()
{
        int n, m;
        cin >> n;
        while (n != 0)
        {
                vector<int> a1(n);
                for (int i = 0; i < n; i++)
                        cin >> a1[i];

                cin >> m;
                vector<int> a2(m);

                for (int i = 0; i < m; i++)
                        cin >> a2[i];

                vector<int> range1, range2;

                int cnt = 0;

                if (m <= n)
                {
                        for (int i = 0; i < m; i++)
                        {
                                for (int j = cnt; j < n; j++)
                                {
                                        if (a1[j] == a2[i])
                                        {
                                                range1.push_back(j);
                                                range2.push_back(i);
                                                cnt = j;
                                                break;
                                        }
                                }
                        }
                }
                else
                {
                        for (int i = 0; i < n; i++)
                        {
                                for (int j = cnt; j < m; j++)
                                {
                                        if (a1[i] == a2[j])
                                        {
                                                range1.push_back(i);
                                                range2.push_back(j);
                                                cnt = j;
                                                break;
                                        }
                                }
                        }
                }
                range1.push_back(n);
                range2.push_back(m);


                vector<int> p1, p2;
                int sum = 0;
                for(int i = 0; i < range1[0]; i++){
                        sum+=a1[i];
                }
                p1.push_back(sum);
                sum = 0;
                for(int i = 0; i < range2[0]; i++)
                        sum+=a2[i];
                p2.push_back(sum);

                for(int i = 0; i < range1.size() - 1; i++){
                        sum = 0;
                        for(int j = range1[i]; j < range1[i+1]; j++){
                                sum+=a1[j];
                        }
                        p1.push_back(sum);
                }
                
                for(int i = 0; i < range2.size() - 1; i++){
                        sum = 0;
                        for(int j = range2[i]; j < range2[i+1]; j++){
                                sum+=a2[j];
                        }
                        p2.push_back(sum);
                }

                int ans = 0;

                for(int i = 0; i < p1.size(); i++)
                        ans += max(p1[i], p2[i]);

                cout << ans << endl;

                cin >> n;
        }
        return 0;
}