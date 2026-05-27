#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Node 
{
    T value;
    Node* next;
};
template <typename T>
class linkedlist
{
    private:
        Node<T> * head;
        int s;
    public:
        linkedlist()
        {
            head = nullptr;
            s = 0;
        }
        void insert(T n)
        {
            Node<T> * node = new Node<T>{n, nullptr};
            if (s == 0)
            {
                head = node;
                s++;
            }
            else
            {
                node -> next = head -> next;
                head -> next = node;
                s++;
            }
        }
        void print()
        {
            Node<T>* current = head;
            while (current)
            {
                cout << current -> value << " ";
                current = current -> next;
            }
            cout << endl;
        }
        int search(T n)
        {
            Node<T>* current = head;
            int position = 0;
            while (current)
            {
                if (current -> value == n)
                {
                    return position;
                }
                current = current -> next;
                position ++;
            }
            return -1;
        }
        int size()
        {
            return s;
        }
        void remove(T n)
        {
            int position = search(n);
            int track = 0;
            if (position == -1)
            {
                cout << n << " isn't in this list" << endl;
            }
            else
            {
                Node<T>* current = head;
                while (current)
                {
                    if (position == 0)
                    {
                        head = current -> next;
                        delete current;
                        s--;
                        break;
                    }
                    else if (track == position - 1)
                    {
                        Node<T> * node = current -> next;
                        current -> next = current -> next -> next;
                        delete node;
                        s--;
                        break;
                    }
                    else
                    {
                        current = current -> next;
                        track++;
                    }
                }
            }
        }
        void removeAt(int p)
        {
            Node<T>* current = head;
            int track = 0;
            while (current)
            {
                if (p == 0)
                {
                    head = current -> next;
                    delete current;
                    s--;
                    break;
                }
                else if (track == p - 1)
                {
                    Node<T> * node = current -> next;
                    current -> next = current -> next -> next;
                    delete node;
                    s--;
                    break;
                }
                else
                {
                    current = current -> next;
                    track++;
                }
            }
        }
        ~linkedlist()
        {
            Node<T> * current = head;
            while (current)
            {
                Node<T> * next = current -> next;
                delete current;
                current = next;
            }
        }
};

template <typename T>
ostream& operator << (ostream& os, linkedlist<T>& list)
{
    list.print();
    return os;
};

int main()
{
    linkedlist<int> list;
    int n, k, value;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        list.insert(value);
    }
    int initialPos = 0;
    while (list.size() > 1)
    {
        initialPos = (initialPos + k - 1) % list.size();
        list.removeAt(initialPos);
    }
    cout << list; 
    return 0;
}