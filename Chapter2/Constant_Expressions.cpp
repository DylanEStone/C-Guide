/*
Under the new standard, we can ask the compiler ot verify that
a variable is a constant expression by declaring the variable in
a constexpr declaration. Variables declared as constxpr are implicity
const and must be initialized by constant expressions

It is generally considered best practice to explicity define constant expressions
 */

constexpr int mf = 20;          // 20 is a constant expression
constexpr int limit = mf + 1;   // mf + 1 is a constant expression

constexpr int sz = size();      // of only if size is a constexpr function

/*
It is important to understand that when we define a pointer in a constexpr declaration
the constexpr specifier applies to the pointer, not the type to which the pointer points
 */

const int *p = nullptr;         // p is a pointer to a const int
constexpr int *q = nullptr;     // q is a const pointer to int
// Types of p and q are quite different; p is a pointer to const, whereas q is a constant
// pointer.
// constexpr pointer may point to a const or a nonconst type

constexpr int *np = nullptr;    // np is a constant pointer to int that is null
int j = 0;
constexpr int i = 42;           // type of i is constant
// i and j must be defined outside any function
constexpr const int *r = &i;    // r is a constant pointer to the const int i
constexpr int *p1 = &j;         // p1 is a constant pointer to the int j