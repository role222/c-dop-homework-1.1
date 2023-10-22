#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int xz[4], yz[4];
    cin >> x >> y;
    xz[0] = x / 1000;
    xz[1] = (x / 100) - (xz[0] * 10);
    xz[2] = (x / 10) - (x / 100) * 10;
    xz[3] = x % 10;
    
    yz[0] = y / 1000;
    yz[1] = (y / 100) - (yz[0] * 10);
    yz[2] = (y / 10) - (y / 100) * 10;
    yz[3] = y % 10;
    
    int b = 0, k = 0;
    for(int i = 0; i < 4; i++){
        b += (xz[i] == yz[i]);
    }
    k += (xz[0] == yz[1]) + (xz[0] == yz[2]) + (xz[0] == yz[3]) + (xz[1] == yz[0]) + (xz[1] == yz[2]) + (xz[1] == yz[3]) + (xz[2] == yz[0]) + (xz[2] == yz[1]) + (xz[2] == yz[3]) + (xz[3] == yz[0]) + (xz[3] == yz[1]) + (xz[3] == yz[2]);
    cout << "быков: " << b << "  " << "коров: " << k;
}