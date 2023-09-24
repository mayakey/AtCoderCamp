/**
 * URL: https://atcoder.jp/contests/abc055/tasks/arc069_a
 * BGN: 2023-09-23 18:10:25
 * END: 2023-09-24 14:41:25
*/
#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    u_long n, m, o;
    cin  >> n >> m;
    o  = (n > (m >> 1) ? (m >> 1) : n);
    o += (m > (o << 1) ? ((m - (o << 1)) >> 2) : 0);
    cout << o << endl;
    return 0;
}
