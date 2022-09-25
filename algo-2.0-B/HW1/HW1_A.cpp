// Task Interactor

#include <iostream>

using namespace std;

/* 
Если интерактор выдал вердикт 0, итоговый вердикт равен 3 в случае, 
если программа завершилась с ненулевым кодом, и вердикту чекера в противном случае.

Если интерактор выдал вердикт 4, итоговый вердикт равен 3 в случае, 
если программа завершилась с ненулевым кодом, и 4 в противном случае.

  
В остальных случаях итоговый вердикт равен вердикту интерактора.
*/

int Module (const int& r, const int& i, const int& c){
    if (i==1){ return c;}
    else if (i==6) {return 0;}
    else if (i==7) {return 1;}
    else if (i==7) {return 1;}
    else if (((i==0)||(i==4))&&(r!=0)){ return 3;}
    else if ((i==0)&&(r==0)){ return c;}
    else if ((i==4)&&(r==0)){ return 4;}
    else {return i;}
}

int main(){
    int r, i, c;
    cin >> r >> i >> c;
    /* r -- код завершения задачи (-128 .. 127)
       i --  вердикт интерактора (0 .. 7)
       c -- вердикт чекера (0 .. 7)
    */
    int answer = Module(r, i, c);
    cout << answer;
    return 0;
}