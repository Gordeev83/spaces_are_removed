#include <iostream>
#include <string>

using namespace std;

void compress(string& str) {
    bool spaceFound = false; 
    string compressedStr; 

    for (char c : str) {
        if (c == ' ') {
            if (!spaceFound) { 
                spaceFound = true; 
                compressedStr += ' '; 
            }
        }
        else {
            spaceFound = false; 
            compressedStr += c; 
        }
    }

    // ������� ������� � ����� ������
    while (!compressedStr.empty() && compressedStr.back() == ' ') {
        compressedStr.pop_back();
    }

    str = compressedStr; 
}

int main() 
{
    setlocale(LC_ALL, "");
    string str = "     �������      ���   �����      �������     ������������    ���-�� ��������                     ";
    cout << str << endl;
    compress(str);
    cout << str << endl; 
    return 0;
}