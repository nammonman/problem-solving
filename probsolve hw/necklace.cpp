#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> pebbles;
    vector<int> finished;
    vector<int>::iterator it;
    n = n - 1;
    int pick, behind;
    for (int i = 0; i < n; i++)
    {
        cin >> pick >> behind;
        if (i == 0)
        {
            finished.push_back(behind);
            finished.push_back(pick);
        }       
        else if (find(finished.begin(),finished.end(),behind) != finished.end()) // behind already in finished
        {
            
        }
        else // behind not in finished
        {
            if (/* condition */) 
            {
                /* code */
            }
            else
            {
                /* code */
            }
            
        }
        
    }
}