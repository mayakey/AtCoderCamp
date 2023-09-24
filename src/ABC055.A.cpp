/**
 * URL:  https://atcoder.jp/contests/abc055/tasks/abc055_a
 * STT: 2023-09-23 13:10:09
 * END: 2023-09-23 13:15:43
*/
#include <iostream>
using namespace std;

int main() {
    std::cin.tie(0)->sync_with_stdio(0);
    int n;
    cin  >> n;
    cout << (n * 800) - ((n / 15) * 200) << endl;
    return 0;
}
