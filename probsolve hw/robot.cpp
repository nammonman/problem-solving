#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int x = 0;
    int y = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char direction = s[i];
        switch (direction)
        {
        case 'N':
            y++;
            break;
        case 'E':
            x++;
            break;
        case 'S':
            y--;
            break;
        case 'W':
            x--;
            break;
        case 'Z':
            x = 0;
            y = 0;
            break;
        }
    }
    cout << x << " " << y;
}