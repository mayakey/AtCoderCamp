/**
 * URL: https://atcoder.jp/contests/abc055/tasks/abc055_b
 * BGN: 2023-09-23 17:33:55
 * END: 2023-09-23 18:05:09
*/
#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long   n;
    long   o = 1;
    cin >> n;
    for (long j=1; j <= n; j++)
    {
        o = (o * j) % 1000000007;
    }
    cout << o << endl;
    return 0;
}
