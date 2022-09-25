

#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main(){
    const string file = "input.txt";
    const string path = "output.txt";
    ofstream fout(path);
    ifstream fin(file);

    int N; fin >> N;  // количество дисциплин
    map<string, int> D;   // ключ - дисциплина  
   
    for (int i=0; i < N; i++){
       
        std::string disc, maxm; 

        getline(fin, disc, ','); 
        getline(fin, maxm, '\n');
        int m = stoi(maxm);  
    
        D[disc] = m;
    }

    int M; fin >> M; 
    map<string, vector<string>> P;   // ключ - дисциплина, значение - свойства человека
    vector<string> vec;

    for (int i=0; i < M; i++){
        std::string name, disc, plus, minus; 

        getline(fin, name, ','); 
        getline(fin, disc, ',');
        vec.push_back(disc);

        getline(fin, plus, ',');
        vec.push_back(plus);

        getline(fin, minus, '\n');
        vec.push_back(minus);

        fout << name << "DISC  " << disc << "PLUS " << plus << "MIN "<< minus << endl;
        P[name] = vec;

        int pl = stoi(plus);  
        int min = stoi(minus);
    }


    // создали словарь (дисциплина - вектор участников) ибо раньше не могли
    map<string, vector<string>> List; // ключ - дисциплина, значение - вектор участников 

    for (const auto& person : P) { 
        List[P.second[0]].pushback(person.first);  // item.first   -- имя участника
    } 

    for (const auto& idisc : List) { // перебираем конкурентов
        if (idisc.second.size() > D[idisc.first]){ //  item.first - название дисциплины, second -- список участников
            for (int i = 0; i < idisc.second.size() ; i++){   // перебор по всем участникам
                P[idisc.second[i]][1];   // добавили в сет ответа
            }  
        } else {  // если все участники проходят
            for (int i = 0; i < idisc.second.size() ; i++){
                answer.insert(idisc.second[i]);   // добавили в сет ответа
            }  
        }
    } 


    set<string> answer; // здесь имена персонажей будут лежать


 
    return 0; 
}
    

//


    /*
3 участника

ключ - дисциплина
значение - участник

ключ - дисциплина

значение участники
если участников больше чем m, то конкурс



    */