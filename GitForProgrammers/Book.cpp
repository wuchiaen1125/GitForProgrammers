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
    
    void printPubDate(){
        std::cout << "The Book is published on " 
        << pubDay << "/"
        << pubMonth << "/"
        << pubYear << ".\n";
    }
    private:
    std::string Title;
    std::list<std::string> Autours;
    int pubDay;
    int pubMonth;
    int pubYear;

};