#include <iostream>
#include <numeric>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x , y;
    if(!(cin>>x>>y)) return 0;
    
    //cout << ((x % y == 0 || y % x == 0) ? "Multiples" : "No Multiples");
    cout<< ((gcd(x,y) == min(x,y)) ? "Multiples" : "No Multiples");
    return 0;
}
