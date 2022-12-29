#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int price;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> price;
        if (price <= 0)
        {
            continue;
        }
        else {
            total = total + price;
        }
    }
    cout << total;
    return 0;
}