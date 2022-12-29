#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    int nextplayer[n];
    int currplayer[n];
    int i,j;
    for (i = 0; i < n; i++)
    {
        cin >> nextplayer[i];
        currplayer[i] = i+1;
    }
    i = 0;
    int count = 0;
    int max = 0;
    while (i<n)
    {
        if (currplayer[i] == i+1 && count != 0)
        {
            if (count > max)
            {
                max = count;
            }            
            count = 0;
            i++;
            continue;
        }
        j = currplayer[i]-1;
        currplayer[i] = nextplayer[j];
        count++;
    }
    cout << max;
    return 0;
}