#include <iostream>
int calendar() {
    std::cout << "\n\n\t\t\t\t#####################\n\t\t\t\t#     April 2023    #\n";
    std::cout << "\t\t\t\t# 1 2 3 4 5 6 7 8 9 #\n\t\t\t\t# 10 11 12 13 14 15 #\n";
    std::cout << "\t\t\t\t# 16 17 18 19 20 21 #\n\t\t\t\t# 22 23 24 25 22 26 #\n";
    std::cout << "\t\t\t\t# 27 28 29 30 1 2 3 #\n\t\t\t\t#####################\n";
    return 0;
}

int house() {
    std::cout << "\n\n\t\t\t\t\t######\t\t##\n\t\t\t\t######################  ##\n";
    std::cout << "\t\t\t######################################\n";
    std::cout << "\t\t\t    ##############################\n";
    std::cout << "\t\t\t    ##############################\n";
    std::cout << "\t\t\t    ###      #####################\n";
    std::cout << "\t\t\t    ###      ############      ###\n";
    std::cout << "\t\t\t    ###      ############      ###\n";
    std::cout << "\t\t\t    #####################      ###\n";
    std::cout << "\t\t\t    #####################      ###\n";
    std::cout << "\t\t\t    #####################      ###\n";
    return 0;
}
int name(){
    std::cout << "\nSERGEY\n";
    return 0;
}
int Big_Dipper() {
    std::cout << "\n\n\t\t\t*\t*\n\t\t\t\t\t*\n\t\t\t\t\t\t*\t\t\t*\n\n\n\n\n\t\t\t\t\t\t *\n\t\t\t\t\t\t\t\t   *\n\n";
    return 0;
}
int resume(){
    std::cout << "\n\n\t\t\t\t#####################\n\t\t\t\tHi, I am Sergey!\n";
    std::cout << "\t\t\t\t#####################\n\t\t\t\tC++ developer\n";
    std::cout << "\t\t\t\t#####################\n\t\t\t\tI like programming since childhood\n";
    std::cout << "\t\t\t\tI'm based in Ukraine Odessa\n";
    std::cout << "\t\t\t\tYou can contact me at lageroped7@gmail.com\n\t\t\t\tI'm learning Django and Data bases\n";
    std::cout << "\t\t\t\tI'm love listening to music 🎧 and playing guitar\n\t\t\t\t#####################\n\n";
    return 0;
}

int main() {
    setlocale(LC_ALL,"ru");
    // first
    calendar();
    // second
    house();
    // third 
    name();
    // four
    Big_Dipper();
    // five
    resume();
}