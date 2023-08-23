#include <iostream>
#include <string>

class Calculator {
    public:
    int Add(int left, int right){
        return left + right;
    }

};
int main(){
    std::string comment1 = "I am adding a line in the Calculator branch. Later, I will create another branch \"Calculator1\" to show conflict during merge.";
    std::string comment2 = "the above part are copied from branch Calulator. This line is added in branch Calculator1";
}