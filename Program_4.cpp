#include <iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int index;
    cout << "Enter array index (0-4): ";
    cin >> index;
    try{
        if (index < 0 || index >= 5){
            throw index;
        }
        cout << "Array element = " << arr[index] << endl;
    }
    catch(int x){
        cout << "Error: Array index out of range.";
    }
    return 0;
}

