#include <iostream>
using namespace std;

void paint();

int main() {
	paint();
  return 0;
}

void paint() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j || i == 9 - j) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
