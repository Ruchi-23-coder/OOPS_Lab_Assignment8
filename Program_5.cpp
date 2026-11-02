#include <iostream>
using namespace std;
class LibraryAccount{
    int availableBooks;
public:
    LibraryAccount(int books){
        availableBooks = books;
    }
    void issueBook(int quantity){
        try{
            if (quantity > availableBooks){
                throw quantity;
            }
            availableBooks = availableBooks - quantity;
            cout << "Books issued successfully." << endl;
            cout << "Remaining books: " << availableBooks << endl;
        }
        catch(int x){
            cout << "Error: Not enough books available." << endl;
            cout << "Available books: " << availableBooks << endl;
        }
    }
};
int main(){
    LibraryAccount l(5);
    int quantity;
    cout << "Enter number of books to issue: ";
    cin >> quantity;
    l.issueBook(quantity);
    return 0;
}

