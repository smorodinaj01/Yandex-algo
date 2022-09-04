#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
 
    if ((x <= 12)&&(y <= 12)){
        cout << '0';
    } else if (x==y) {
        cout << '0';
    } else { cout << '1';}
    return 0;
}