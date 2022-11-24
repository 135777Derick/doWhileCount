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





// code 2
#include <iostream>
using namespace std;

int main() {
   int sum,count = 20;
   do
   {
       sum += count;
       //increment count by value 1
       count++;
   }
   while(count <= 25);
   
    cout<<"Sum of all numbers from 20 to 25 are " <<sum;
   
    return 0;
}
