#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;
    int k;
    cin >> k;
    int n = 0, e = 0, s = 0, w = 0;
    for (int i = 0; i < input.size(); i++)
    {
        char direction = input[i];
        switch (direction)
        {
        case 'N':
            n++;
            break;
        case 'E':
            e++;
            break;
        case 'S':
            s++;
            break;
        case 'W':
            w++;
            break;
        }
    }
    int energy = 0,miss = 0;
    if (n > s)
    {
        energy += n;
        miss += s;
    }
    else {
        energy += s;
        miss+= n;
    }
    if (e > w)
    {
        energy += e;
        miss += w;
    }
    else {
        energy += w;
        miss += e;
    }
    miss = abs(miss - k);
    cout << (energy-miss)*2;
}
