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
    private:
    std::string Title;
    std::list<std::string> Autours;

};