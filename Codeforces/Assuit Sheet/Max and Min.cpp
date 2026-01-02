#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x , y, z;
    if(!(cin>>x>>y>>z)) return 0;
    
    cout << min({x,y,z}) << " " << max({x,y,z});
    return 0;
}
