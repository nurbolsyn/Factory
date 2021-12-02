#include <conio.h>
#include "pizza.h"
#include "nystylecheezepizza.h"
#include "pizzastore.h"
#include "nystylepizzastore.h"

int main(int argc, char* argv[])
{
    PizzaStore* nyStore = new NYStylePizzaStore();
    Pizza* pizza = nyStore->orderPizza("cheese");
    delete nyStore, pizza;
    getch();
    return 0;
}