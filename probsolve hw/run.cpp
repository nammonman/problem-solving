#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    long int k;
    cin >> n >>  k;
    long int time[n];
    for (int i = 0; i < n; i++)
    {
        cin >> time[i];
    }
    sort(time,time+n);
    int count = n;
    for (int i = 1; i < n; i++)
    {
        if (time[i]*k - time[0] > time[0]*k) {
            count--;
        }
    }
    cout << count;
}