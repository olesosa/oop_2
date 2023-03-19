#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    int mas[10][5];
    int base[10] = { 3111, 2200, 3200, 2201, 1010, 4101, 2100, 2301, 4100, 3201 };
    char symbol[10] = { 'A', 'C', 'G', 'F', 'J', 'H', 'L', 'S', 'U', 'Y' };
    int ver = 0, hor = 0, diag = 0, cent = 0;
    int key;

    ifstream file;
    file.open("TextFile1.txt");
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 5; j++)
            file >> mas[i][j];


    //vert
    for (int i = 1; i < 4; i++)
        for (int j = 0; j <= 4; j += 4)
            if (mas[i][j] == 1)
                ver++;
    for (int i = 5; i < 8; i++)
        for (int j = 0; j <= 4; j += 4)
            if (mas[i][j] == 1)
                ver++;
    ver /= 4;


    //horz
    for (int i = 0; i < 9; i += 4)
        for (int j = 0; j < 4; j++)
            if (mas[i][j] == 1)
                hor++;
    hor /= 4;


    //diag
    for (int i = 1; i < 4; i++)
        if (mas[i][4 - i] == 1)
            diag++;
    for (int i = 5; i < 8; i++)
        if (mas[i][8 - i] == 1)
            diag++;
    diag /= 4;


    //cent
    int i = 1;
    for (int j = 0; j < 4; j++)
        if (mas[i][j] == 1)
            cent = 1;


    key = 1000 * ver + 100 * hor + 10 * diag + cent;
    cout << 'Key ' << key << endl;

    for (int i = 0; i < 8; i++)
        if (key == base[i])
            cout << "Symbol " << symbol[i] << endl;

    system("pause");
    return 0;
}
