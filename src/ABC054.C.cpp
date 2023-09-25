/**
 * URL: https://atcoder.jp/contests/abc054/tasks/abc054_b
 * BGN: 2023-09-24 16:49:22
 * END: 2023-09-25 16:54:26
*/
#include <iostream>
#include <vector>
#define Rep(i, n) for (int i=0; i<n; i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m, rng;
    cin >> n >> m;
    rng = n - m + 1;    /* scan range is 0..rng*/

    vector<string> iA(n);
    vector<string> iB(m);

    Rep(i, n) cin >> iA.at(i);
    Rep(i, m) cin >> iB.at(i);

    bool bOut = false;
    Rep(rowA, rng)
    {
        u_long posB = 0;
        while ((posB = iA.at(rowA).find(iB.at(0), posB)) != string::npos)
        {
            for (int rowB=0; rowB < m; rowB++)
            {
                bOut = (iB.at(rowB) == iA.at(rowA + rowB).substr(posB, m));
                if (bOut == false)
                    break;
            }
            posB += m;
            if (bOut) break;
        }
        if (bOut) break;
    }
    cout << (bOut ? "Yes" : "No") << endl;
    return 0;
}
