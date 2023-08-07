#include<iostream>
using namespace std;
int main(){
    float OS,CN,OOPS,DBMS,e,p;
    cout << "Enter the 5 subject marks: ";
    cin >> OS >> CN >> OOPS >> DBMS >> e;
    p=((OS+CN+OOPS+DBMS+e)/5);
    if(p>80)
    cout << "Grade A" << endl;
    else if(p>60)
    cout << "Grade B" << endl;
    else if(p>40)
    cout << "Grade C" << endl;
    else
    cout << "Fail";
    return 0;
}