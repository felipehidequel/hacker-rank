#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int age;
    int standard;
    string first_name;
    string last_name;
public:
    void setAge(int a);
    void setStandard(int s);
    void setFirst_name(string fn);
    void setLast_name(string ln);

    int getAge();
    int getStandard();
    string getFirst_name();
    string getLast_name();

    Student(int a, int s, string fn, string ln);
    Student();
    void to_string();
};
// Cronstuctors
 Student:: Student(int a, int s, string fn, string ln)
{
    setAge(a);
    setStandard(s);
    setFirst_name(fn);
    setLast_name(ln);
}
 Student:: Student()
{
}
// Setters
void Student:: setAge(int a){
    age = a;
}
void Student:: setStandard(int s){
    standard = s;

}
void Student::setFirst_name(string fn){
    first_name = fn;
}
void Student::setLast_name(string ln){
    last_name = ln;
}
//Getters
int Student:: getAge(){
    return age;
}
int Student:: getStandard(){
    return standard;
}
string Student:: getFirst_name(){
    return first_name;
}
string Student:: getLast_name(){
    return last_name;
} 
//to string
void Student:: to_string(){
    cout << age << "," << first_name << "," << last_name << "," << standard; 
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st(age, standard, first_name, last_name);    
    
    cout << st.getAge() << "\n";
    cout << st.getLast_name() << ", " << st.getFirst_name() << "\n";
    cout << st.getStandard() << "\n";
    cout << "\n";    
    st.to_string();
    
    return 0;
}