#include <cstdlib>
#include <iostream>
#include "stackClass.h"

using namespace std;


int isValidBrackets (char *bs){
    stack s;
    int i = 0;
    char c;
    
    while (bs[i]){
        if (bs[i] == '(' || bs[i] == '[' || bs[i] == '{'){
            s.push(bs[i]);
        }
        else if (bs[i] == ')' || bs[i] == ']' || bs[i] == '}'){
            if (s.isEmpty()){ 
                return 0;
            }
            else{
                c = s.pop();
                if (bs[i] == ')' && c != '(') return 0;
                else if (bs[i] == ']' && c != '[') return 0;
                else if (bs[i] == '}' && c != '{') return 0;
            }
        }
        i++;
    }
    if (s.isEmpty()) return 1;  // valid bracketing
    else return 0;;
}

int main(int argc, char *argv[])
{
    //char bs[100] = "(dsfk{lfjadsdfa([]) }  )fdsfs(fdf))))";
    stack s, t, r;
    int x, y;
    s.push (2);
    s.push (-8);
    s.push (56);
    s.push (47);
    
	x = s.pop();
    y = s.pop();
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";
    cout << "\n\n";
//    if(isValidBrackets (bs)){
//        cout << "The bracketing in " << '"' << bs << '"' << " is good.\n\n";
//    }
//    else{
//        cout << "The bracketing in " << '"' << bs << '"' << " is bad.\n\n";
//    }
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
