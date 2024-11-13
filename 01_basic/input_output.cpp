#include<iostream>

// ใช้ namespace ในการกำหนดขอบเขต std::
using namespace std;

int main() {
    int age;
    cout << "Your age: ";
    cin >> age;
    cout << "Your age " << age << endl;
    
    int Newage;
    cout << "Your age: ";
    cin >> Newage;

    age = Newage;

    cout << "Your age: " << age << endl;



    /*

    การ print ใน c++
    ต้องการขึ้นบรรทัดใหม่:
        cout >> "Your favorite" << favorite endl;
    ต้องการขึ้นบรรทัดใหม่ใน "":
        cout >> "Your \n favorite" << favorite;
    หรือจะใช้ \t ก็ได้(tab) 
    
    */

    char favorite;
    cout << "Your favorite: ";
    cin >> favorite;
    cout << "Your favorite " << favorite << endl;
    
    return 0;
}

