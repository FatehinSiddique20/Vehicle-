#include <iostream>
#include "Vehichle.cpp"

#include "string"

using namespace std;

int main()
{   Vehichle <string> s;

    string c,n;
    cout<<"Insert 5 Vehicle information\n";
    for(int i =0;i<5;i++)
    {
        cin>>c;
        cin>>n;

        s.Push(c,n);
        if(s.licenseCheck(n))
        {
            i--;
        }


    }
    cout<<endl;

    cout<<"Cars in the list:\n"<<endl;
    s.print();

    for(int i=1; i<=5; i++)
    {
        cout <<"Pop number "<<i<<endl<<endl;
        s.Pop();
        s.print();
        if (s.IsEmpty())
    {
        cout<<"List is empty";
    }
    else
    {
        cout<<"List is not empty";
    }
        cout<<endl<<endl;
    }





    return 0;
}
