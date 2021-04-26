#include <iostream>

using namespace std;

struct node
{
    char data;
    node *next = nullptr;
    node *previous = nullptr;
    node(char ch = '\0') : data{ch} {};
};

class list {
    private:
        node *head, *current, *tail;
    public:
        list() {
            head = current = tail = new node;
        }
        void front() {
            current = head;
        }
        void back() {
            current = tail;
        }
        void print() {
            for (node *temp = head->next; temp != nullptr; temp = temp->next) cout << temp->data;
            cout << '\n';
        }
        void add(char ch) {
            node *temp = new node(ch);
            if (current == tail) tail = temp;
            temp->next = current->next;
            current->next = temp;
            temp->previous = current;
            current = temp;
        }
        void backspace() {
            if (current == head) return;
            node *temp = current;
            current->previous->next = current->next;
            if (current != tail) current->next->previous = current->previous;
            else tail = current->previous;
            current = current->previous;
            delete temp;
        }
};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int numCases;
    cin >> numCases;
    cin.ignore();

    for (int _ = 0; _ < numCases; _++){
        string str;
        getline(cin, str);
        list l;

        for (auto ch: str) {
            switch (ch) {
                case '<':
                    l.backspace();
                    break;
                case '[':
                    l.front();
                    break;
                case ']':
                    l.back();
                    break;
                default:
                    l.add(ch);
            }
        }
        l.print();        
    }
}