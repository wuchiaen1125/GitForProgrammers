//
//  main.cpp
//  Fibonacci
//
//  Created by 吳佳恩 on 2023/8/18.
//

#include <iostream>

//費氏數列loop
int Fib(int n){
    if(n==1) //因為不小心寫成if(n=1) 結果就一直是全部0，要注意單等號是assignment
        return 0;
    if(n==2)
        return 1;
    int prev{0};
    int current{1};
    for(int i=3;i<=n; i++){
        int next = prev+current;
        prev=current;
        current = next;
    }
    return current;

}
int main(){
    for(int a=1; a<=10; a++){
        std::cout << Fib(a) << std::endl;
    }
    std::cout << std::endl << Fib(18) << std::endl;
}
/* 費氏數列recursion
int Fib(int);
int main(){
    cout << Fib(3) << endl;
}
int Fib(int n){
    if(n=0)
        return 0;
    else if (n=1)
        return 1;
    else return Fib(n-1)+Fib(n-2);
}
*/
