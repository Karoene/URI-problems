#include <iostream>

using namespace std;


int main(){
    int x, z, sum, i = 0;    
    
    cin >> x;
    cin >> z;
    sum = x;
    while(z <= x){
        cin >> z;
    }
    
    while(sum <= z){
        
        sum = sum + (x+1);
        ++i;
        ++x;
        
    }
    cout << i+1 << endl;


}