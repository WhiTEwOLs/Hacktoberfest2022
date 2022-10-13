#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define all(c) c.begin(), c.end()
#define FAST ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

vector<vector<ll>> threeSum(vector<ll> &A)
{
    set<vector<ll>> s;
    vector<vector<ll>> ans;
    sort(A.begin(), A.end());
    long long int n = A.size(), i;
    for (i = 0; i < n; i++)
    {
        long long int l = i + 1;
        long long int r = n - 1;
        while (l < r)
        {
            long long int sum = (long long int)A[i] + (long long int)A[l] + (long long int)A[r];
            if (sum == 0)
            {
                s.insert({A[i], A[l], A[r]});
                l++;
                r--;
            }
            else if (sum > 0)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        ans.push_back(*it);
    }
    return ans;
}

void Result()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<vector<ll>> a = threeSum(v);
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main()
{
    FAST int test = 1;
    // cin>>test;
    while (test--)
    {
        Result();
    }
    return 0;
}
