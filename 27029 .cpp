#include <iostream>
using namespace std;

int main()
{
    long long number;
    do {
        cout << "輸入國際標準書號：";
        cin >> number;
    } while (number < 1000000000 || number > 10000000000);

    int lastNumber = number % 10;
    int times = 0;

    number /= 10;

    for (int i = 10; i > 1; i --){
        times += number % 10/i;
        number /= 10;
        
        while (times > 11){
            times -= 11;
        }
    }
    if (times == lastNumber){
        cout << "正確";
    } else {
        cout << "錯誤";
    }
}
