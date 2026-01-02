#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x , y = 0;
  
    if(!(cin>>x>>y)) return 0;
  
    cout<<"floor "<<x<<" / "<<y<< " = "<<floor(x/y)<<endl;
    cout<<"ceil "<<x<<" / "<<y<< " = "<<ceil(x/y)<<endl;
    cout<<"round "<<x<<" / "<<y<< " = "<<round(x/y);
    
    return 0;
}
