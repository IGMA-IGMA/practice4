#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;
    if (x == 0 || x <= 0) {
        return 1;
    }
    cout << max(1.0 / cos(y * y / x), pow(x + log(1.0 / x), 1.0 / 3.0));
    return 0;
}