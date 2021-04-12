#include <iostream>
using namespace std;

int main(){
    int counter = 100;
    while (counter <=500)
    {
        (counter % 3==0 && counter % 5==0)?cout << counter << "   fizz and buzz\n":cout << counter<< endl;
        if(counter % 3==0){
            cout << counter<< "   fizz\n";
        } if(counter % 5==0){
            cout << counter << "   buzz\n";
        }

        counter++;
        
    }
    
}