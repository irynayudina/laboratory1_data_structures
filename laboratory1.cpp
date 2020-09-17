
#include <iostream>
#include <list>
using namespace std;

struct Book
{
    string name;
    string author;
};
//struct node
//{
//    Book data;
//    node* next;
//};
//class list
//{
//private:
//    node* head, * tail;
//public:
//    list()
//    {
//        head = NULL;
//        tail = NULL;
//    }
//    void createnode(Book value)/////////создать певрый узел или добавить к конец существуюшего списка
//    {
//        node* temp = new node;
//        temp->data = value;
//        temp->next = NULL;
//        if (head == NULL)
//        {
//            head = temp;
//            tail = temp;
//            temp = NULL;
//        }
//        else
//        {
//            tail->next = temp;
//            tail = temp;
//        }
//    }
//    bool isNotEmpty(node* n)
//    {
//        if ((n->data.name[0] >= 65 && n->data.name[0] <= 90) || (n->data.name[0] >= 97 && n->data.name[0] <= 122))
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//    void display()
//    {
//        node* temp = new node;
//        temp = head;
//        while (temp != NULL)
//        {
//            cout << temp->data.name << "\n";
//            cout << temp->data.author << "\n";
//            temp = temp->next;
//        }
//    }
//    void displayNotEmpty()
//    {
//        node* temp = new node;
//        temp = head;
//        while (temp != NULL)
//        {
//            if (isNotEmpty(temp))
//            {
//                cout << temp->data.name << "\n";
//                cout << temp->data.author << "\n";
//            }
//            temp = temp->next;
//        }
//    }
//    void insert_start(Book value)
//    {
//        node* temp = new node;
//        temp->data = value;
//        temp->next = head;
//        head = temp;
//    }
//    void insert_position(int pos, Book value)
//    {
//        node* pre = new node;
//        node* cur = new node;
//        node* temp = new node;
//        cur = head;
//        for (int i = 1; i < pos; i++)
//        {
//            pre = cur;
//            cur = cur->next;
//        }
//        temp->data = value;
//        pre->next = temp;
//        temp->next = cur;
//    }
//    void delete_first()
//    {
//        node* temp = new node;
//        temp = head;
//        head = head->next;
//        delete temp;
//    }
//    void delete_last()
//    {
//        node* current = new node;
//        node* previous = new node;
//        current = head;
//        while (current->next != NULL)
//        {
//            previous = current;
//            current = current->next;
//        }
//        tail = previous;
//        previous->next = NULL;
//        delete current;
//    }
//    void delete_position(int pos)
//    {
//        node* current = new node;
//        node* previous = new node;
//        current = head;
//        for (int i = 1; i < pos; i++)
//        {
//            previous = current;
//            current = current->next;
//        }
//        previous->next = current->next;
//    }
//};
struct Abonent
{
    string pressmark;
    string PIP;
    list<Book> Books_ever_taken;
    void Print() {
        cout << "pressmark: " << pressmark << " PIP: " << PIP << " Books_ever_taken: ";
        list<Book>::iterator it;
        for (it = Books_ever_taken.begin(); it != Books_ever_taken.end(); it++) {
            cout << it->name << " - " << it->author << endl;
        }
    }
};
    void find_info_by_book_name(string _name, Abonent _library_user)
    {

        list<Book>::iterator it;
        for (it = _library_user.Books_ever_taken.begin(); it != _library_user.Books_ever_taken.end(); it++) 
        {
            if (it->name == _name)
            {
                _library_user.Print();
            }
        }
    }

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
            find_info_by_book_name(clue_name, abonents[i]);
        }
            
    }