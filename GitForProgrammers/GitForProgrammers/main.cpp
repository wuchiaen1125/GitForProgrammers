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
    std::cout << "noticing commit 17 is ahead of 19. 17 was after 19 in the first place, after rebasing a new commit id is given, so it becomes ahead of 19\n" 
    << "also noticing that after merge there is no Git-generating commit\n"
    << "also commit 18 (pulling the new main to branch) is omitted " << std::endl;
    std::cout << "push時出現：\nremote: Invalid username or password.\n" 
    << "fatal: Authentication failed for...。可能是因為token失效了\n"
    << "問題是出在mirror副本，不能push，但正本可以。\n";
    return 0;
}
