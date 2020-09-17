
#include <iostream>
#include <string>
#include <list>
using namespace std;

struct Book
{
    string name;
    string author;
    void Init(string _name, string _author) {
        name = _name;
        author = _author;
    }
};
struct Abonent
{
    string pressmark;
    string PIP;
    list<Book> Books_ever_taken;
    void Init(string _pressmark, string _PIP, list<Book> _Books_ever_taken) {
        pressmark = _pressmark;
        PIP = _PIP;
        Books_ever_taken = _Books_ever_taken;
    }
    void Init(string _pressmark, string _PIP, int initial_size_of_books_list) {
        pressmark = _pressmark;
        PIP = _PIP;
        for (int i = 0; i < initial_size_of_books_list; i++)
        {
            Book b;
            b.Init("name" + to_string(i), "author" + to_string(i));
            Books_ever_taken.push_back(b);
        }
    }
    void Print() {
        cout << "pressmark: " << pressmark << " PIP: " << PIP << " Books_ever_taken: ";
        list<Book>::iterator it;
        for (it = Books_ever_taken.begin(); it != Books_ever_taken.end(); it++) {
            cout << it->name << " - " << it->author << endl;
        }
    }
    void find_info_by_book_name(string _name)
    {

        list<Book>::iterator it;
        for (it = Books_ever_taken.begin(); it != Books_ever_taken.end(); it++)
        {
            if (it->name == _name)
            {
                Print();
            }
        }
    }
};  

    int main()
    {
        cout << "Enter amount_of_users\n";
        int amount_of_users;
        cin >> amount_of_users;
        cout << "Enter clue_name\n";
        string clue_name;
        cin >> clue_name;

        Abonent* abonents = new Abonent[amount_of_users];
        for (int i = 0; i < amount_of_users; i++) {
            abonents[i].Init("", "", 5);
        }
        for (int i = 0; i < amount_of_users; i++) {
            abonents[i].find_info_by_book_name(clue_name);
        }
        cout << "end";
    }