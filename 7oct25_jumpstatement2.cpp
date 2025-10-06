//Programmer: Irfan Aiman Bin Zuraidi| 21DIT25F1411 | Jump statement 2.0
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++){
    //condition to continue
        if (i==3){
            continue;
        }
        cout<< i << endl;
    }
    return 0;
}