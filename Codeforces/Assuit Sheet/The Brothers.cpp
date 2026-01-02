#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string f1,l1,f2,l2;
    
    if(!(cin>>f1>>l1>>f2>>l2)) return 0;
    
    cout << ((l1 == l2) ? "ARE Brothers" : "NOT");
    return 0;
}
