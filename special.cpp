#include<iostream>
#include<string>
using namespace std;
class teacher{
    private:
    double salary;
    public:
    string name;
    string dept;
    string shift;
    teacher(string name,string dept,string shift){
           this->name=name;
           this->dept=dept;
            this->shift=shift;
            
    }
    void setSalary(double ammount){
        salary=ammount;
    }
    double getSalary(){
        return salary;
    }
    
};
int main(){
    teacher t1{"sajeeb","cse","morning"};
    cout<<t1.name<<endl;
    t1.setSalary(250000);
    cout<<t1.getSalary()<<endl;
    
}