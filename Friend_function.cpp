//Introduction to friend Function in CPP
/*
  A friend function of a class is defined outside that class' scope but it has the right to access all private and protected members of the class. Even though the prototypes for friend functions appear in the class definition, friends are not member functions.

  A friend can be a function, function template, or member function, or a class or class template, in which case the entire class and all of its members are friends.

 To declare a function as a friend of a class, precede the function prototype in the class definition with keyword friend as follows:

*/

#include<bits/stdc++.h>
using namespace std;
class box{
    int length = 100;
    public:
    int breadth = 20;
    public:
    friend void display(box ob); 

};

void display(box ob){
        cout<<"The breadth of the box is : "<<ob.length<<endl;
    }
int main()
{
    box box1;
    display(box1);
     

return 0;
}
 

