#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    string st;
    getline(cin, st);

    // Создаем map для подсчета количества вхождений каждого слова
    map<string, int> wordCount;

    // Разбиваем строку на слова и увеличиваем счетчик для каждого слова
    string word;
    for (char c : st) {
        if (c != ' ') {
            word += c;
        }
        else {
            if (!word.empty()) {
                wordCount[word]++;
                word.clear();
            }
        }
    }
    // Добавляем последнее слово
    if (!word.empty()) {
        wordCount[word]++;
    }

    // Формируем строку из слов, встречающихся только один раз
    string uniqueWords;
    for (const auto& pair : wordCount) {
        if (pair.second == 1) {
            uniqueWords += pair.first + " ";
        }
    }

    cout << "Слова, встречающиеся по одному разу: " << uniqueWords << endl;

    return 0;
}




