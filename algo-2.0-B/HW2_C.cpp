#include <iostream>

using namespace std;
/*
В строкоремонтную мастерскую принесли строку, 
состоящую из строчных латинских букв. 
Заказчик хочет сделать из неё палиндром. 
В мастерской могут за 1 байтландский тугрик 
заменить произвольную букву в строке любой выбранной заказчиком буквой.
Какую минимальную сумму придётся заплатить заказчику за ремонт строки?
*/

int CountPrice(const string& word){
    int len = word.size();  // длина строки
    int price = 0;
    for (int i=0; i < len/2; i++){
        if (word[i]!=word[len - 1 - i]){
            price += 1;
        }
    }
    return price;
}
 
int main(){
    string word; 
    cin >> word;
    int price = CountPrice(word);
    cout << price;
    return 0;
}