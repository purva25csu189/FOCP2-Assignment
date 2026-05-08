/*#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    s.insert(5);
s.insert(5);*/
/*s.insert(5);
cout<<"count of 5: "<<s.count(5)<<endl;
cout<<"size: "<<s.size()<<endl;
}*/


#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="A";
    m[1]="B";
    cout<<"Value:"<<m[1]<<endl;
    cout<<"count:"<<m.count(1)<<endl;

}

