// Task Interactor

#include <iostream>
#include <math.h>

using namespace std;

int Distance(const int& N, const int& S, const int& F){
/*    int max_station = S < F ? F : S;  // числа не совпадают по условию
    int min_station = S < F ? S : F;
*/
    int max_distance = N / 2; // вне зависимости от чётности (ответ - целое)
    if (abs(S - F) <= max_distance){ return abs(S - F) - 1; }
    else {
        return N - abs(S - F) - 1;
    }
}

int main(){
    int N, S, F;
    cin >> N >> S >> F;
 
    int answer = Distance(N, S, F);
    cout << answer;
    return 0;
}