#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    string st;
    getline(cin, st);

    // ������� map ��� �������� ���������� ��������� ������� �����
    map<string, int> wordCount;

    // ��������� ������ �� ����� � ����������� ������� ��� ������� �����
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
    // ��������� ��������� �����
    if (!word.empty()) {
        wordCount[word]++;
    }

    // ��������� ������ �� ����, ������������� ������ ���� ���
    string uniqueWords;
    for (const auto& pair : wordCount) {
        if (pair.second == 1) {
            uniqueWords += pair.first + " ";
        }
    }

    cout << "�����, ������������� �� ������ ����: " << uniqueWords << endl;

    return 0;
}




