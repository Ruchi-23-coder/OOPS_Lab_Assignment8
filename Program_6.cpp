#include <iostream>
using namespace std;
class Student{
    int marks[5];
public:
    void inputMarks(){
        int sum = 0;
        bool valid = true;
        try{
            for (int i = 0; i < 5; i++){
                cout << "Enter marks of subject " << i + 1 << ": ";
                cin >> marks[i];
                if (marks[i] < 0 || marks[i] > 100){
                    throw marks[i];
                }
                sum = sum + marks[i];
            }
        }
        catch(int x){
            cout << "Error: Invalid marks! " << "Marks must be between 0 and 100." << endl;
            valid = false;
        }
        if (valid){
            float average = sum / 5.0;
            cout << "Total Marks: " << sum << endl;
            cout << "Average Marks: " << average << endl;
        }
    }
};
int main(){
    Student s;
    s.inputMarks();
    return 0;
}

