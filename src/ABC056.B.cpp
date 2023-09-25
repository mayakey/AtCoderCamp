/**
 * URL: https://atcoder.jp/contests/abc056/tasks/abc056_b
 * BGN: 2023-09-25 17:11:50
 * END: 2023-09-25 17:23:40
*/
#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int W, a, b;
    cin  >> W >> a >> b;
    cout << ((a+W)<b ? b-(a+W) : ((b+W)<a ? a-(b+W) : 0)) << endl;
    return 0;
}
