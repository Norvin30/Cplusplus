#include<iostream>

using namespace std;
int main()
{
    /*loops in C++
    there are three types of loops in c++:
        1. fot loop
        2. while loop
        3. do-while loop
    */

   /*for looop in c++*/
   // int i=1;
   // cout<<i;
   // i++;

   // syntax for the loop
   // for(initialization; condition; updation)
   // {
   //     loop body(c++ code);
   // }

   // for (int i= 1; i <= 40; i++)
   // {
   //      /* code */
   //      cout<<iendl;
   // }

   // example of infinite for loop
   // for (int i = 1; 34 <=40; i++)
   // {
   //       /* code */
   //       cout<<i<<endl;
   // }
       
   /*while loop in C++*/
   // syntax:
   // while(condition)
   // {
   //     c++ statements;
   // }

   // printing 1 to 40 using while loop
   // int i=1;
   // while(i<=40){
   //     cout<<i<<endl;
   //     i++;
   // }

   // example of infinite while loop
   int i = 1;
   while(true){
       cout<<i<<endl;
       i++;
   }    

     
   /*do while loop in C++*/
   // syntax:
   // do  
   // {
   //     c++ statements;
   // }while(condition);


   // printing 1 to 40 using while loop
   // int i=1;
   // do{
   //     cout<<i<<endl;
   //     i++;
   // } while(false); 
   return 0;
}