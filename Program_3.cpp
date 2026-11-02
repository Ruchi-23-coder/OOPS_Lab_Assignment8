#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    try{
        if (num < 0){
            throw "Number cannot be negative.";
        }
        else if (num > 100){
            throw num;
        }
        cout << "Valid number: " << num << endl;
    }
    catch(const char *msg){
        cout << "Error: " << msg << endl;
    }
    catch(int x){
        cout << "Error: Number cannot be greater than 100.";
    }
    return 0;
}

