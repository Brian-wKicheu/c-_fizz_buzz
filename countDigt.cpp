#include <iostream>
using namespace std;

int main(){
    int num = 6453;
    cout << num ;

    if (num == 0)
    {
       cout << " you have entered 0.\n";
    }else{
        int counter = 0;

        while (num > 0)
        {
            num /= 10;
            counter++;//count 4
        }
        cout << " Number contains :"<< counter << " digits"<< endl;
    }
    
    

}