#include "array.cpp"
#include "NumericArray.cpp"
#include "Stack.cpp"
using namespace std;

int main()
{
    Stack<int> st;
    for (int i = 0; i < 5; i++)
    {
        st.Push(i);
        cout << st.Pop() << endl;
    }

}