/*
Operator มี 3 แบบ
-Arithmetic Operators (Math)
    +, -, *, /, %
-Relational Operators 
    =(กำหนดตัวแปร), ==, !=, >, <, >=, <=
Logical Operators รวม condition
    &&: AND   
    ||: OR
    ! : NOT
*/

#include<iostream>
using namespace std;

int main() {
    int age_1;
    int age_2;
    int sum_age;
    int avg;

    cout << "1st age: ";
    cin >> age_1;
    cout << "2rd age: ";
    cin >> age_2;

    sum_age = age_1 + age_2;
    avg = (age_1 + age_2)/2;
    
    cout << "sum age = " << sum_age << endl;
    cout << "avg = " << avg;
}