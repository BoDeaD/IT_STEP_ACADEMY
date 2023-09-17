// Указатели
#include <iostream>

using namespace std;

int max_min_value_of_matrix_main_diagonal(int massive[][3], int length);

int memory_changing();
void func(int& num1);

int const lenght = 3;
int num1[lenght] = {3,5,10};

void func1(int (&massive)[], int length);

int main()
{
    /*
    int* p;
    cout << p << "\n";
    */
    /*
    int *pint;
    double *pdouble;
    std::cout << "*pint size: " << sizeof(pint) << std::endl;
    std::cout << "*pdouble size: " << sizeof(pdouble) << std::endl;
    */
    /*
    int number = 25;
    int *pnumber = &number;
    std::cout << "Address = " << pnumber<< std::endl;
    std::cout << "Value = " << *pnumber << std::endl;
    */
   /*
   int const length = 3;
   int massive[length] = {3,6,9};
   int *pointer = &massive[0];
   std::cout << "Address = " << pointer<< std::endl;
   std::cout << "Value = " << *pointer << std::endl;
   */
  /*
   cout << "num1 = " << num1[0] << "\n";
   cout << "num2 = " << num1[1] << "\n";
   cout << "num3 = " << num1[2] << "\n";
   memory_changing();
   cout << "\nnum1 = " << num1[0] << "\n";
   cout << "num2 = " << num1[1] << "\n";
   cout << "num3 = " << num1[2] << "\n";
  */
  int nums[] = {1, 2, 3, 4, 5};
  for (unsigned i = 0; i < 5; i++){
    cout << "\nadress - " << nums+i << "\t value - " << *(nums+i);
  }

  cout <<"\n";

  func1(nums, 5);
  // after function
  for (unsigned i = 0; i < 5; i++){
    cout << "\nadress - " << nums+i << "\t value - " << *(nums+i);
  }


  /*
  int number = 13;
  cout << "In main - "<< number << "\n";
  func(number);
  cout << "After func - "<< number << "\n";
  */
}
void func1(int (&massive)[], int length){
    for (int i = 0; i < length; i++) {
        massive[i] *= 2;
    }
}
void func(int &num1)
{
    num1 = num1 * num1;
    cout << "In func - "<< num1 << "\n";
}
   
/*
int memory_changing()
{
    for (int i = 0; i < lenght; i++){
        char min = 10;
        char max = 100;
        int K = max - min + 1;
        int one = rand() % K + min;

        int *pnum1 = &num1[i];
        *pnum1 = one;
    }

    return 0;
}
*/
int max_min_value_of_matrix_main_diagonal(int massive[][3], int length)
{
    int lst_diagonal[] = {};
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            if (i == j){
                int *pointer = &(massive[j][i]);
                cout << *pointer << "\n";
            }
            cout << lst_diagonal[i] << "\n";
        }
    }
    return 0;
}