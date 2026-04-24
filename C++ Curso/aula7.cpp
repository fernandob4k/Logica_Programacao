#include <iostream>
using namespace std;

int main()
{

    int n1, n2;
    n1 = 0;
    n2 = 10;

    cout << n1 << '\n';

    // N1 = n1 - 10 , n1-=10;
    // N1 = n1 * 10 , n1*= 10;
    // N1 = n1 /10 , n1 /= 10;
    // N1 = n1%10 , n1 %=10;

    n1 += 10;
    n1--;
    n1 *= 5;
    cout << n1 << '\n';

    return 0;
}