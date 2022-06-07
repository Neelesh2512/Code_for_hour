#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int calculateJumps(int X, int Y, int n, int walls[])
{
    int jumps = 0;
    for(int i=0;i<n;i++) {
        int reach = X;
        int jump = 1;
        while(reach < walls[i]) {
            reach += (X-Y);
            jump += 1;
        }
        jumps += jump;
    }
    return jumps;
}

int main()
{
    int X;
    cin >> X;
    int Y;
    cin >> Y;
    int n;
    cin >> n;
    int walls[n];
    for(int i=0;i<n;i++)
        cin >> walls[i];
    cout << calculateJumps(X, Y, n, walls);
    return 0;
}