/*
Type aliases

A type alias is a name that is a synonym for another type. Type aliases let us simplify
complicated type difinitions, making those types easier to use. Type aliases alse let us 
emphasize the purpose for which a type is used
 */

typedef double wages;       // wages is a synonym for double
typedef wages base, *p;     // base is a synonym for double, p for double*
// typedef defines aliases, not variables

/* 
Using is another way to define aliases
 */

using SI = Sales_item;      // SI is a synonym for Sales_item

wages hourly, weekly;       // same as double hourly, weekly
SI item;                    // same as Sales_item item

/*
Declarations that use type aliases that represent compound types and const can yield
surprising results. For example, the following declarations use the type pstring
which is an alias for the type char*
 */

typedef char *pstring;
const pstring cstr = 0;     // cstr is a constant pointer to char
const pstring *ps;          // ps is a pointer to a constant pointer to char

/*
We can use the auto type specifier when we dont know the type of an expression
 */

// the type of item is deduced from the type of the result of adding val1 and val2
double val1 = 1, val2 = 2;
auto item1 = val1 + val2;

