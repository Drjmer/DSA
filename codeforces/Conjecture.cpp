#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, k;
        cin >> x >> y >> k;
        while (k > 0 && x > 1)
        {
            int rem = y - (x % y);
            if (rem > k)
                {x += k;k=0;}
            else if (rem <= k)
            {
                x += rem;
                k -= rem;
            }

            while (x % y == 0)
                x /= y;
        }
        // when x=1
        if (k > 0)
        {
            k = k % (y - 1);
            x += k;
        } // x--->1;
        cout << x << endl;
    }
}