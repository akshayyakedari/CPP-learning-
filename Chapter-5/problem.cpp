/*Write a program that asks for the name and age of two people, then prints which person is older.*/
#include <iostream>
#include <string>
#include <string_view>

std::string getName(){
    std::cout << "enter your name";
    std::string name{};
    std::getline(std::cin >> std::ws ,name);
    return name;

}

int getAge(){
    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;
    return age;

}

int main(){

    std::string name1{getName()};
    int age1{getAge()};

    std::string name2{getName()};
    int age2{getAge()};

if(age1>age2){

    std::cout << name1 << " is elder" << "\n";

}

else if(age2>age1){
    std::cout << name2 << " is elder \n";
}

else{

    std::cout << "Both are of same age \n";
}

 return 0;   
}