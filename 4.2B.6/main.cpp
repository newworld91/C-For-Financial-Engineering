#include "array.cpp"
#include "NumericArray.cpp"
#include "Stack.cpp"
#include "StackException.hpp"
using namespace std;

int main()
{
    Stack<int,5> st;

    for (int i = 0; i < 5; i++)
    {

            st.Push(i);
            cout << st.Pop()<<endl;

    }
}