#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student *a, Student *b)
    {
        if (a->marks == b->marks)
        {
            return a->roll > b->roll;
        }
        else
        {
            return a->marks < b->marks;
        }
    }
};

int main()
{
    priority_queue<Student *, vector<Student *>, cmp> pq;
    int n;
    cin >> n;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student *obj = new Student(name, roll, marks);
        pq.push(obj);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student *obj = new Student(name, roll, marks);
            pq.push(obj);
            cout << pq.top()->name << " " << pq.top()->roll << " " << pq.top()->marks;
        }
        else if (cmd == 1)
        {
            if (!pq.empty())
                cout << pq.top()->name << " " << pq.top()->roll << " " << pq.top()->marks;
            else
                cout << "Empty";
        }
        else
        {
            if (!pq.empty())
                pq.pop();
            if (!pq.empty())
                cout << pq.top()->name << " " << pq.top()->roll << " " << pq.top()->marks;
            else
                cout << "Empty";
        }
        cout << endl;
    }

    return 0;
}