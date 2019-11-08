#include <iostream>
#include <algorithm>
#include<conio.h>
using namespace std;
// define compare function to compare between char i and j
 bool compare(char i,char j){       // Line-1: Write proper function header

      return(i<j);   // Line-2: Write correct function body

}


int main() {
    char data[5];

    for (int i = 0; i < 5; i++)
        cin >> data[i];

    sort(data, data + 5, compare);

    for (int i = 0; i < 5; i++)
        cout << data[i] << " ";

getch();
}
