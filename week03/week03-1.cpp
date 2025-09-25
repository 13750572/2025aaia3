#include <iostream>///Ｃ＋＋２的　ｃｉｎ　ｏｕｔ
#include <vector>///Ｃ＋＋２的陣列ｖｅｃｔｏｒ
using namespace std;

int main ()
{
    vector<int> a(2);///有個陣列,裡面有2格(陣列的size大小是2)

    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';///印出陣列
    cout << endl;///跳行

    a.push_back(99);///把99推到陣列a的更後面.push_back()
    a.push_back(77);///把77推到陣列a的更後面

    for(int i=0; i<a.size(); i++)cout << a[i]<< ' ';///印出陣列
    cout << endl;///跳行
}
