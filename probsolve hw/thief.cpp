#include <iostream>
using namespace std;

int main() {
    int n,k,t;
    cin >> n >> k >> t;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = i+1;
    }
    int count = 0;
    int j = 0;
    while (1)
    {
        if (count != 0 && A[j] == 1)
        {
            break;
        }  
        if (A[j] == t)
        {
            count++;
            break;
        }
        j = (j+k)%n;
        count++;
    }
    cout << count;
}