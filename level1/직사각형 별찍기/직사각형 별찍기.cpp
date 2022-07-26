#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
/*
가로a 세로가 b인 직사각형 별이므로
b번 반복하고 줄바꾸고 이과정을 3번 반복해서 출력하면 됩니다.
*/
