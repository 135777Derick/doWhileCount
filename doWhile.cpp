#include <iostream>
using namespace std;

int main() {
   int sum,count = 20;
   
   while(count <= 25){
       sum += count;
       count++;
   }
    cout<<"Sum of all numbers from 20 to 25 are " <<sum;
   
    return 0;
}
