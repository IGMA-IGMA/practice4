#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    float x, y;
    double R, S;
    cin >> x >> y;
    R = pow(cos(y * y / x), -1);
    S = pow(x + log(1 / x), 1 / 3);
    cout << max(R, S);
    return 0;
}