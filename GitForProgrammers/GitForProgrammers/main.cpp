 //
//  main.cpp
//  GitForProgrammers
//
//  Created by 吳佳恩 on 2023/8/17.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n" << "I am adding a new line.\n";
    std::cout << "this line is added (in /Users/wuchiaen/Documents/Desktop/GitForProgrammers) to show the staging area" << std::endl;
    std::cout << "\n\nwriting a new line to make the current \"main\" have one more commit than the original \"main\" which is used as the base for branch \"Book\" \n" 
    << "this is to do the command \"rebase\" 如果沒有rebase，在合併branch into main時會自動多產生一個commit \"Merge branch \'...\'\"" << std::endl; 
    return 0;
}
