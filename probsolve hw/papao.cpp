#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pts = 0;
    int x,y;
    double r;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        x = abs(x);
        y = abs(y);
        r = sqrt(x*x + y*y);
        if (r <=2)
        {
            pts = pts + 5;
        } 
        else if (2 < r && r <=4)
        {
            pts = pts + 4;
        }
        else if (4 < r && r <=6)
        {
            pts = pts + 3;
        }else if (6 < r && r <=8)
        {
            pts = pts + 2;
        }
        else if (8 < r && r <=10)
        {
            pts = pts + 1;
        }
    }
    cout << pts;
    return 0;
}