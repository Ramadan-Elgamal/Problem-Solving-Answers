#include <iostream>
#include <cctype>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    char x;
    if(!(cin>>x)) return 0;
    
    if(x >= 'a' && x <= 'z'){
        cout<< (char)(x - 32);
    }else{
        cout<< (char)(x + 32);
    }
    return 0;
}
