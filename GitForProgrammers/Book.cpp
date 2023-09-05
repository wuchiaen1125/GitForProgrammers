#include <iostream>
#include <string>
#include <list>


class Book{
    public:
    void setTitle (std::string bookTitle){
        Title = bookTitle;
    }
    std::string getTitle (){
        return Title;
    }
    void setAuthors(){
        std::cout << "please enter the name of author or \"end\" to end" << std::endl;
        std::string name;
        std::cin >> name;
        while (name != "end"){
            Authors.push_back(name);
            std::cout << "please enter the name of another author or \"end\" to end" << std::endl;
            std::cin >> name;
        }
        if (name == "end") std::cout << "finished" << std::endl;
    }
    void setPubDay (int day){
        if (day > 0 && day <= 31) pubDay = day;
        else {
            std::cout << "invalid, so day is set 01" << std::endl;
            pubDay = 1;
        }
    }
    void printPubDate(){
        std::cout << "The Book is published on " 
        << pubDay << "/"
        << pubMonth << "/"
        << pubYear << ".\n";
    }
    private:
    std::string Title;
    std::list<std::string> Authors;
    int pubDay;
    int pubMonth;
    int pubYear;

};