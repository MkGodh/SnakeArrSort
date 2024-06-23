#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int snake[5][5];

    int number = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            snake[i][j] = number;
            number++;

        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << snake[i][(i % 2 == 0) ? j : 5 - j - 1] << " ";
        }
        cout << endl;
    }

}
