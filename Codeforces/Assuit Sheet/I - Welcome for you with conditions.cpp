#include <iostream>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x , y = 0;
    if(cin>>x>>y){
        cout<< (x>= y ? "Yes" : "No");
    }
    return 0;
}
