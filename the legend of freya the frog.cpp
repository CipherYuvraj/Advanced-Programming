#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;

        int moves = 0;
        int curX = 0, curY = 0;
        bool facingX = true;

        while (curX != x || curY != y) {
            int maxJump = facingX ? k - (curX % k) : k - (curY % k);
            int jump = min(maxJump, facingX ? (x - curX) : (y - curY));
            moves++;
            curX += facingX ? jump : 0;
            curY += facingX ? 0 : jump;
            facingX = !facingX;
        }

        cout << moves << endl;
    }

    return 0;
}