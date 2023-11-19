//В текстовом файле находятся названия переменных. Но названия эти не соответствуют нашему соглашению об именовании.
// Вам необходимо создать новый файл с правильными названиями переменных.
//Правильный формат имени переменной: имя_переменной
//В файле имена переменных могут быть следующего вида
//- имя-переменной
//- имя переменной
//Итоговую программу выложить у себя в аккаунте GitHub




#include "string"
#include "vector"
#include "function.h"

using namespace std;


int main() {
    string source = "P:\\programing\\home_works\\home_work_for_lesson_17\\variable_name\\name.txt";
    string output = "P:\\programing\\home_works\\home_work_for_lesson_17\\variable_name\\output file.txt";
    char replacement = '_';
    vector<string> rewrite = Parcer(source, replacement);
    Rewrite(output, rewrite);
    return 0;
}
