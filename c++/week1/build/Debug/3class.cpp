// #include <iostream>
// using namespace std;
// class Student
// {
//     string name;
//     int rollno;
//     int age;
//     float marks;

//     public:

//     void inputStudentInfo(string,int,int,float);  //declare the function in class
//     void displayStudentInfo();
// };

// void Student::inputStudentInfo(string n,int r,int a,float m)  //defining the function
// {
//     name = n;
//     rollno = r;
//     age = a;
//     marks = m;
// }

// void Student::displayStudentInfo()
// {
//     cout<<"The name of student is: "<<name<<endl;
//     cout<<"The rollno of student is: "<<rollno<<endl;
//     cout<<"The age of student is: "<<age<<endl;
//     cout<<"The marks of student are: "<<marks<<endl;
// }

// int main()
// {
//     Student student1;
//     string name;
//     int rollno;
//     int age;
//     float marks;
//     cin>>name>>rollno>>age>>marks;
//     student1.inputStudentInfo(name,rollno,age,marks);
//     student1.displayStudentInfo();
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class Hospital
// {
//     string name;
//     int licensenumber;
//     int doctorno;

//     public:
//     //declare the function
//     void inputHospitalInfo(string,int,int);
//     void displayHospitalInfo();
// };

// void Hospital::inputHospitalInfo(string n,int l,int d)
// {
//     name = n;
//     licensenumber = l;
//     doctorno =d;
// }

// void Hospital::displayHospitalInfo()
// {
//     cout<<"The name of patient is: "<<name<<endl;
//     cout<<"The license no is: "<<licensenumber<<endl;
//     cout<<"The doctor no is: "<<doctorno<<endl;
    
// }

// int main()
// {
//     Hospital hospital1;
//     string name;
//     int licensenumber;
//     int doctorno;
//     cin>>name>>licensenumber>>doctorno;
//     hospital1.inputHospitalInfo(name,licensenumber,doctorno);
//     hospital1.displayHospitalInfo();
//     return 0;

// }



#include <iostream>
using namespace std;
class City
{
    string name;
    long population;
    double area;
    string state;
    int pincode;

    public:
    //declare the function
    void inputCityInfo(string,long,double,string,int);
    void displayCityInfo();
};

void City::inputCityInfo(string n,long p,double a,string s,int pi)
{
    name = n;
    population = p;
    area =a;
    state =s;
    pincode=pi;

}

void City::displayCityInfo()
{
    cout<<endl<<"The name of city is: "<<name<<endl;
    cout<<"The population is: "<<population<<endl;
    cout<<"The area is: "<<area<<endl;
    cout<<"The state is: "<<state<<endl;
    cout<<"The pincode is: "<<pincode<<endl;
}

int main()
{
    City city1;
    string name;
    long population;
    double area;
    string state;
    int pincode;
    cout<<"Enter city name: ";
    cin>>name;
    cout<<"Enter city population: ";
    cin>>population;
    cout<<"Enter city area: ";
    cin>>area;
    cout<<"Enter city state: ";
    cin>>state;
    cout<<"Enter city pincode: ";
    cin>>pincode;


    city1.inputCityInfo(name,population,area,state,pincode);
    city1.displayCityInfo();
    return 0;

}