#include <iostream>
#include <vector>
using namespace std;


vector <int> st;

void push(int n)
{
    cout<<"ok"<<endl;
    st.push_back(n);

}
void pop()
{
    if(st.size() == 0){
        cout<<"error"<<endl;
    }
    else{
        cout<<st.back()<<endl;
        st.pop_back();
    }
}
void top(){
    if(st.size() > 0)
    {
        cout<<st.back()<<endl;
    }
    else{
        cout<<"error"<<endl;
    }
}
void ssize()
{
    cout<<st.size()<<endl;

}
void clean()
{
    st.clear();
    cout<<"ok"<<endl;
}
void exit()
{
    cout<<"bye"<<endl;
}
int main()
{
    string c;
    getline(cin, c);

    while(c != "exit")
    {
        if(c == "clear")
        {
            clean();
        }
        else if(c == "pop")
        {
            pop();
        }
        else if(c == "back")
        {
            top();
        }
        else if(c == "size")
        {
            ssize();
        }
        else if(c.substr(0, 4) == "push")
        {
            string f = c.substr(5);
            int v = stoi(f);
            push(v);
        }
        getline(cin, c);
    }
    exit();

}
