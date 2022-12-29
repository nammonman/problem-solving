#include <iostream>
#include <vector>

using namespace std;



int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> head[100001];
    vector<int> adj;   
    int v1,v2;
    for (int i = 0; i < m; i++)
    {
        cin >> v1 >> v2;
        head[v1].push_back(v2);
        head[v2].push_back(v1);
    }
    
}