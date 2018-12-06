#include "array.cpp"
#include "NumericArray.cpp"
#include "Stack.cpp"
#include "StackException.hpp"
using namespace std;

int main()
{
    Stack<int> st;
    for (int i = 0; i < 5; i++)
    {
        try
        {
            st.Push(i);
        }
        catch (StackException& er)
        {
            cout << er.GetMessage() << endl;
        }

        try
        {
            cout << st.Pop()<<endl;
        }
        catch (StackException& er)
        {
            cout << er.GetMessage() << endl;
        }
    }
}