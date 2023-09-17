#include <iostream>

using namespace std;

int first(){
    return 0;
}
void second(int massive[], int lenght){
    int list[] = {};
    int res = 0;
    for (int i = lenght; i > 0;i-- ){
        res++;
        list[res] += massive[i];
    }
    cout << "\nMassive - " << list << "\n";
}

int main(){
    //first();
    const int lenght = 5;
    int massive[lenght] = {1, 3, 5, 9, 12};
    second(massive, lenght);
    return 0;
}