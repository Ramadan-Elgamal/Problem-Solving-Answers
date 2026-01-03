#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x;
    if(!(cin>>x)) return 0;
    
    int firstDigit = x;
    
    while(firstDigit >= 10){
        firstDigit /= 10;
    }
    
    cout<< ((firstDigit % 2 == 0) ? "EVEN" : "ODD");
    return 0;
}
