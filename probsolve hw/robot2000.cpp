#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;
    int facing = 0; // 0N,1E,2S,3W
    string output;
    
    for (int i = 0; i < input.size(); i++)
    {
        int flag = 0;
        char direction = input[i];
        switch (direction)
        {
        case 'N':
            while (facing != 0)
            {
                output+="R";
                facing++;
                facing = facing %4;
                //spinDetect++;
            }
            break;
        case 'E':
            while (facing != 1)
            {
                output+="R";
                facing++;
                facing = facing %4;
                //spinDetect++;
            }
            break;
        case 'S':
            while (facing != 2)
            {
                output+="R";
                facing++;
                facing = facing %4;
                //spinDetect++;
            }
            break;
        case 'W':
            while (facing != 3)
            {
                output+="R";
                facing++;
                facing = facing %4;
                //spinDetect++;
            }
            break;
        case 'Z':
            output+="Z";
            facing = 0;
            flag = 1;
            break;
        }
        if (!flag)
        {
            output+="F";
        }    
            
    }
    cout << output;
}
