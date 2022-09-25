/* Последовательность состоит из натуральных чисел и завершается числом 0. 
   Определите, сколько элементов этой последовательности равны ее наибольшему элементу.
*/
#include <fstream>
using namespace std;
 
int main(){
    const string file = "input.txt";
    const string path = "output.txt";
    ifstream fin(file);
    ofstream fout(path);

    int elem = -1; // -1 это чтобы запустить перебор условие на 0
    int answer = 0;
    int max = 0;

    for ( ; ; ){
        fin >> elem;
        if (elem == 0){ 
            break;
        } else {
            if (elem > max){
                max = elem;
                answer = 1;
            } else if (elem == max){
                answer += 1;
            }
        }
    }    
    fout << answer;
    return 0;
}