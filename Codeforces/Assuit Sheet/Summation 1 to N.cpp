#include <iostream>

using namespace std;

int main() {
    long long n;
    if(!(cin>>n)) return 0;
    long long total = n * (n + 1) / 2;
    cout<<total;
    return 0;
}
