#include <iostream>
#include <cctype>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    char x;
    if(!(cin>>x)) return 0;
    
    if (isdigit(x)) {
        cout << "IS DIGIT\n";
    } else if (isalpha(x)) {
        cout << "ALPHA\n";
        if (isupper(x)) cout << "IS CAPITAL\n";
        else cout << "IS SMALL\n";
    }
    return 0;
}
