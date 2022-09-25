/*
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

    const string file = "inputE.txt";
    const string path = "outputE.txt";
    ofstream fout(path);
    ifstream fin(file);
*/
 
#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::string filename("input.txt");
    FILE* input_file = fopen(filename.c_str(), "r");

    int balance = 0;
    int need_to_delete = 0;
    int index = -1;
    int possible_to_delete = -1;
    char ch='0';
    for (int i = 0; (ch=fgetc(input_file))!=EOF; ++i) {
        if (ch == '{') {
            if (balance == 0 && need_to_delete == 0) {
                index = i;
            }
            balance++;

        } else if (ch == '}') {
            if (balance == 0) {
                need_to_delete++;
                index = i;
            } else {
                balance--;
                if (balance == 0 && need_to_delete == 0) { index = -1; }

            }
            if (possible_to_delete == -1) { possible_to_delete = i; }


        }

    }
    if (need_to_delete + balance == 1) {
        std::cout << (need_to_delete > 0  ? possible_to_delete : index ) + 1;
    } else {
        std::cout << -1;
    }
}