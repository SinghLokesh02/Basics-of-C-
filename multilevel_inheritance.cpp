
// Multilevel Inheritance

#include <bits/stdc++.h>
using namespace std;

// Example - 1
// class A
// {
// public:
//     int a ;
//     A()
//     {
//         cout << "Enter the value of A : ";
//         cin >> a;
//     }
// };

// class B : public A
// {
// public:
//     int b;

//     B()
//     {
//         cout << "Enter the value of B : ";
//         cin >> b;
//     }
   
// };
// class C : public B
// {
//    public:

//  C()
//     {
//         cout << "The sum of two number : " << a + b << endl;
//     }
//    void print(){
//     cout<<"Hello this is multilevel Inheritance\n";
//    }
// };


// Example - 2
class student{
    public:
    int roll_no;
    string name;
    void get_data(){
        cout<<"Enter the roll no : ";
        cin>>roll_no;
        cout<<"Enter the name : ";
        cin>>name;
    }

};
class marks : public student{
    public:
    int m1,m2,m3;
    void get_marks(){
        cout<<"Enter the marks of 3 Subjects\n";
        cin>>m1>>m2>>m3;
    }
};
class result : public marks{
    public:
    int total;
    void display(){
        total = m1+m2+m3;
        cout<<"The Name of student is : "<<name<<endl;
        cout<<"The Roll Number of student is : "<<roll_no<<endl;
        cout<<"The total marks of "<<name<<" is "<<total<<endl;
    }
};

int main()
{
    // Example - 1
    // C a;
    // a.print();

    // Example - 2
    result lokesh;
    lokesh.get_data();
    lokesh.get_marks();
    lokesh.display();


 
 

    return 0;
}