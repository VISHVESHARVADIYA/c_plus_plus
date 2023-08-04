// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter age ";
//     cin>>n;
//     cout<<"your age is "<<n;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     string d;
//     string c;
//     cout<<"enter name :";
//     cin>>c;
//     cout<<"enter section : ";
//     cin>>d;
//     cout<<"enter age :";
//     cin>>a;
//     cout<<"your name is "<<c<<endl<<"your section is "<<d<<endl<<"your age is "<<a;
// }

// to create structure 
// struct ABC
// {
//     int a;
//     int b;
//     int c;
// }



// // how to declare a class
// #include <iostream>
// using namespace std;
// class Abc
// {
//     public:
//     int a;
//     int b;
//     char c;
// };
// int main()
// {
    
//     Abc x;
//     x.a=5;
//     x.b=6;
//     x.c='a';
//     cout<<x.a<<" "<<x.b<<" "<<x.c;
// }

#include <iostream>
using namespace std;
class Student
{
    public:
    int reg;
    int sec;
    string name;
    


void setvalues(int a, int b,string c)

    reg=a;
    sec=b;
    name=c;

void display()

    cout<<reg<<" "<<sec<<" "<<name;
};
int main()
{
    Student x;
    int reg,sec;
    string name;
    cin>>reg>>sec>>name;
    x.setvalues(reg,sec,name);
    x.display();
}


// #include <iostream>
// using namespace std;
// class Student
// {
//     public:
//     int reg;
//     int sec;
//     string name;
//     void setvalues(int a, int b,string c)
//     {
//         reg=a;
//         sec=b;
//         name=c;
//     }
//     void display()
//     {
//         cout<<reg<<" "<<sec<<" "<<name;
//     }
// };
// int main()
// {
//     Student x;
//     int reg,sec;
//     string name;
//     cin>>reg>>sec>>name;
//     x.setvalues(reg,sec,name);
//     x.display();
// }
