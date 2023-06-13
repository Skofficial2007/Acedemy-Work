#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    protected:
        int age;
        string name;
    public:
        virtual void getdata(){}
        virtual void putdata(){}  
};

class Professor : virtual public Person
{
    int publications, cur_id;
    static int cur_id_P;
    public:
        void getdata()
        {
            cin >> name >> age >> publications;
            cur_id = ++cur_id_P;
        }  
        void putdata()
        {
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
};

int Professor ::cur_id_P = 0;

class Student : virtual public Person
{
    int marks[6], cur_id;
    static int cur_id_S;
    public:
        void getdata()
        {
            cin >> name >> age >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5];
            cur_id = ++cur_id_S;
        }  
        void putdata()
        {
            int Sum_of_marks = 0;
            cout << name << " " << age << " ";
            for(int i = 0; i < 6; i++)
            {
                Sum_of_marks = Sum_of_marks + marks[i];
            }
            cout << Sum_of_marks << " " << cur_id << endl;
        }
};

int Student ::cur_id_S = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
