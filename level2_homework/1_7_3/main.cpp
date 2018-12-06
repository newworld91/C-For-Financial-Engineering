#include <stdio.h>
#define PRD(a) printf("%d", (a) )
#define NL          printf("\n");
// Create and initialse array
int a[]={0, 1, 2, 3, 4};
int main()
{
    int i;
    int* p;
    for (i=0; i<=4; i++)
        PRD(a[i]);  /// should print 01234
        NL;         /// new line
     for (p=&a[0]; p<=&a[4]; p++) /// p = 0; p  <= 4
        PRD(*p); ///should print 01234
        NL;     /// new line
        NL;     /// new line
     for (p=&a[0], i=0; i<=4; i++)
        PRD(p[i]); /// 01234
        NL;         /// new line
     for (p=a, i=0; p+i<=a+4; p++, i++)
        PRD(*(p+i)); /// 024 because p+i = 0 , 2 , 4
        NL; /// new line
        NL; /// new line
     for (p=a+4; p>=a; p--)
        PRD(*p);  /// 43210 because p = a +4 (4,3,2,1,0)
        NL; /// new line
     for (p=a+4, i=0; i<=4; i++)
         PRD(p[-i]); /// -1 = 4, -2 = 3 , -3 = 2, ect.
        NL; /// new line
     for (p=a+4; p>=a; p--)
        PRD(a[p-a]); /// 43210
        NL; /// new line


   return 0;
}