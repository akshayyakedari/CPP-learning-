#include <iostream>
#include <string>
#include<string_view>


// int main(){
//     int x{5};  // x is initialized and has a copy
//     std::string{"hello"};
//     return 0;
// }
    
/*initializing and copying of a fundamental type is easy but in strings it's not easy.It is too much space and time. 
to prevent this we can have a special thing where it justs see string as a literal rather than a varible(which copies).
so we use std::string_view. it acts as read only function that means we can access and read but we can't modify. 
NOTE: string_view is suitable when me merely print strings which are used constantly in code and is not modified by any 
       of the input statement or any other. few use cases are below.  */

/*SOME UNDEFINED BEHAVIOURS */
/* These below will have no compilation errors but has run time errors*/
/*1st example*/
// std::string_view getName(){
//     std::string s{"Akshaya"};
//     return s;
// }

// int main(){
//     getName();
//     return 0;
// }

/* 2nd example*/

// int main(){
// std::string s{"kedari"};
//  s="A long long string";
//  std::cout << s;
// std::string_view sv=s;
// std::cout << sv;
// return 0;
// }

/* 3rd example*/
int main(){
    std::string s{"kedari"};
    std::string_view sv {s};
    s="Akshaya";
    std::cout << s;
    return 0;
}


