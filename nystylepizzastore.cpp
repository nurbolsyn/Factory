#include "nystylepizzastore.h"

NYStylePizzaStore::NYStylePizzaStore()
{
}

Pizza* NYStylePizzaStore::createPizza(char* type) {
    Pizza* pizza;
    if (strcmp(type, "cheese") == 0) {
        pizza = new NYStyleCheezePizza();
    }
    /*else if (type == "pepperoni") {
        pizza = new NYStylePepperoniPizza();
    }
    else if (type == "clam") {
        pizza = new NYStyleClamPizza();
    }
    else if (type == "veggie") {
        pizza = new NYStyleVeggiePizza();
    }*/
    return pizza;
}