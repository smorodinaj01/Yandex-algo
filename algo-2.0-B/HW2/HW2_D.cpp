/*
В первой строке входных данных содержатся два числа:
L — длина лавочки и K — количество гранитных блоков-ножек.
Оба числа натуральные и не превышают 10 000.

Во второй строке следуют K различных целых неотрицательных чисел, задающих положение каждой ножки. 
Положение ножки определяется расстоянием от левого края плиты до левого края ножки (ножка — это куб размером 1×1×1). 
Ножки перечислены слева направо (то есть начиная с ножки с меньшим расстоянием до левого края).

БЛОКИ ВЫТАСКИВЫЮТСЯ С КРАЮ 
*/
#include <fstream>
#include <vector>

using namespace std;

int main(){
    const string file = "input.txt";
    const string path = "output.txt";
    ifstream fin(file);
    ofstream fout(path);

    vector<int> ans;
    int L, K;
    fin >> L >> K;
    double center = (float)L/2;

    for (int i = 0; i < K; i++){
        int coord; 
        fin >> coord;
        // если есть блок на центре, то
        if ((coord < center)&&(coord + 1 > center)){
            ans.clear();
            ans.push_back(coord);
            break;   // выход из цикла for - нет смысла проверять если есть куб на центре
        } else {
            ans.push_back(coord); // добивили ножку в ответ
        }
    }
    
    if (ans.size() > 2){
        double min_left = center;
        double min_right = center;

        for (int i=0; i < ans.size(); i++){
            double left_dist = center  - ans[i] - 0.5;
            double right_dist = ans[i] - center + 0.5;

            if ((left_dist < min_left)&&(left_dist > 0)){
                min_left = left_dist;
            } 
            if ((right_dist < min_right)&&(right_dist > 0)){
                min_right = right_dist;
            } 
        }
        int a = center - min_left;
        int b = center + min_right;

        ans.clear();
        ans.push_back(a);
        ans.push_back(b);
    }

    // ответ всегда из 2 чисел или одного
    // ВЫВОД
    if (ans.size() == 1){
        fout << ans[0];
    } else {
        fout << ans[0] << " " << ans[1];
    }   
    return 0;
}

