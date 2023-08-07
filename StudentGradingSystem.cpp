#include<iostream>
using namespace std;
int main(){
    float OS,CN,OOPS,DBMS,p;
    string name;
    cout << "Enter Your Name: ";
    cin >> name;
    
    cout << "Enter the 4 subject marks: ";
    cin >> OS >> CN >> OOPS >> DBMS;
    p=((OS+CN+OOPS+DBMS)/4);
    cout << name << "-";
    if(p>90)
    cout << "Grade A+" << endl;
    else if(p>80)
    cout << "Grade A" << endl;
    else if(p>70)
    cout << "Grade B" << endl;
    else if(p>60)
    cout << "Grade C" << endl;
    else if(p>50)
    cout << "Grade D" << endl;
    else
    cout << "Fail";
    return 0;
}
