#include <stdio.h>
struct article
{
    int article_number;
    int quantity;
    char description[15];
};

void print(struct article* pt)
{
    printf("Article Number = %d\nQuantity = %d\nDescription = %s", pt->article_number, pt->quantity, pt->description);
}

int main()
{
    struct article mypoint = {1 ,10, "Hello World"};
    print(&mypoint);
}