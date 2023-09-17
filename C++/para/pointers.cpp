#include <iostream>

using namespace std;
// Одномерный массив
void func1(int (&massive)[5], int length) {
    for (int i = 0; i < length; i++) {
        massive[i] *= 2;
    }
}
// Двухмерный массив
void func2(int (&massive)[3][3], int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++){
            massive[i][j] *= 2;
        }
    }
}
int max_min_value_of_matrix_main_diagonal(int massive[][3], int length)
{
    int lst_diagonal[length];
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            if (i == j){
                int *pointer = &(massive[i][i]);
                lst_diagonal[i] = *pointer;
            }
        }
    }
    for (int i = 0; i < length; i++){
        cout << lst_diagonal[i] << "\n";
    }
    return 0;
}

int main()
{
    /*
    const int length1 = 5;
    int nums1[] = {1,2,3,4,5};

    func1(nums1,length1);

    for (int i = 0; i < length1; i++) {
        cout << nums1[i] << "\n";
    }
    */
    const int length2 = 3;
    const int length2_1 = 3;
    int nums2[length2][length2_1] = {{1,3,5},{2,4,6},{9,8,7}};
    /*
    func2(nums2,length2_1);

    for (int i = 0; i < length2; i++) {
        for (int j = 0; j < length2_1; j++){
            cout << nums2[i][j] << "\n";
        }
    }
    */

    max_min_value_of_matrix_main_diagonal(nums2, length2_1);
    return 0;
}