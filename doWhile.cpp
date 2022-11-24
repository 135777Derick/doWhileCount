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





// code 2 do while

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





//code 3 do while
  #include <iostream>
using namespace std;

int main() {
   int num =12;
   cout<<"This are even numbers between 12 and 50\n";
   do
   {
       cout<< num ;
       num +=2;
   }
   while(num <= 50);
   
    return 0;
}




//code 4 do while
   #include <iostream>
using namespace std;

int main() {
   int num, sum;
   
   do
   {
      cout<<"Enter integers\n";
      cin>>num; 
      sum +=num;
     
   }
   while(num != 0);
   cout<<"Sum of the numbers is"<<sum;
    return 0;
}






//code 5 for loop
   #include <iostream>
using namespace std;

int main() {
    int sum,count;
   for(int count=20; count<=25; count++){
       sum+=count;
   }
   cout<<sum;
    return 0;
}





//code 6
#include <iostream>
using namespace std;

int main() {
    int sum,count;
   for(int count=12; count<=28; count+=2){
      cout<<count;
   }
   
    return 0;
}
