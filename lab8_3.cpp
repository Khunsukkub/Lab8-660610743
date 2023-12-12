#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int age , bounty;
    double height;
    string character;

    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        cin.ignore(9999, '\n');
        if (height < 100){
            character = "Chopper";
        } else{
            if(height < 180){
                character = "Usopp";
            } else{
                cout << "Enter your bounty: ";
                cin >> bounty;
                cin.ignore(9999, '\n');
                if (bounty <= 1100000000){
                    character = "Sanji";
                } else{
                    character = "Zoro";
                }
            }
        }
    } else{
        if (age <= 60){
            cout << "Enter your bounty: ";
            cin >> bounty;
            cin.ignore(9999, '\n');
            if (bounty <= 500000000){
                character = "Franky";
                } else{
                character = "Jinbe";
                }
        } else{
            character = "Brook";
        }
    }

    cout << "Your character = " << character;

}