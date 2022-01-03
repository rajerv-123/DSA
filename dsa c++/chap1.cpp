#include <iostream>
using namespace std;

//int main()
// {
    /*int a ;
    cin >> a;
    // if a is positive
    if(a>0){
      cout<<"a is positive "<< endl;
    }
    // if a is negetive
    else{
        cout<<" a is negetive "<< endl;
    }*/
//     int a,b;
//   //  cin >> a >> b;
//   a = cin.get();
//   a = '1';
//     cout << "value of a and b is "<< a<<endl;

// if else condition in c++

// int a , b;

// cout<<"Enter the value of a : "<<endl;
// cin>>a;
// cout<<"Enter the value of b : "<<endl;
// cin>>b;

// if(a>b){
//     cout<<"A is greater "<<endl;
// }
// if(b>a){
//     cout<<"B is greater "<<endl;
// }



// program for no. is greter than or not 

// int a ;
// cout<< "enter the value of a"<< endl;
// cin>>a;
// if(a>0){
//     cout<<"A is grater than B"<<endl;
// }
// if(a<0){
//     cout<<"B is less than A"<<endl;
// }
// int a = 24 ;
// if (a > 20){
//   cout << "love";
// }
// else if(a ==24){
//   cout<<"lovely";
// }
// else{
//   cout<<"rajeev";
// }
// cout<<a;




// write a program to print range of alphabet is upper or lower case 
// char ch;
// cin>>"enter the alphabet: ">>endl;

// if (ch>='a' && ch<='z'){
//   cout<<"thi is lower case"<<endl;
  
// }
// else if (ch>='A' && ch<='Z'){
//   cout<<"this is upper case"<<endl;
  
// }
// else
//   cout<<"not a alphabet"<<endl;
// }




// by using for loop is used to print the alphabets from A to Z. A loop variable is taken to do this of type ‘char’

 
// int main()
// {
//     // Declare the variables
//     char i;
 
//     // Display the alphabets
//     cout << "The Alphabets from A to Z are: \n";
 
//     // Traverse each character
//     // with the help of for loop
//     for (i = 'A'; i <= 'Z'; i++)
//     {
 
//         // Print the alphabet
//         cout << i <<" ";
//     }
 
//     return 0;
// }





// looping  printing no. upto n; veriable
// int main(){
//   int n;

//   cin>>n;
//   int i = 1;

//   while(i<=n){

//     cout<<i<< " ";

//     i=i+1;
//   }
// }




// sum of n veriable 

// int main(){
//   int n;
//   cin>>n;
//   int i = 1;
//   int sum = 0;

//   while(i<=n){
//     sum = sum + i;
//     i = i + 1;
//   }
//   cout<<"value of sum is : "<< sum <<endl;


// }


// // printing * in c++ 
// int main() {
//   int n;
//   cin >> n;

//   int i = 1;

//   while(i<=n){
//     int j = 1;
//     while(j<=n){
//       cout<< "*";
//       j = j  + 1;

//     }
//     cout<<endl;   
//     i = i + 1;
//   }
// }




// int main(){
//   int n;
//   cin>>n;

//   int i = 1 ;

//   while(i<=n){
//     int j = 1;
//     while(j<=n){
//       cout<<j;// for reverse printing (n-j+1)
//       j = j + 1;
//     }
//     cout<<endl;
//     i = i + 1;
//   }
// }



// printing a number row and collumn 
// int main(){
//   int n;
//   cin>>n;

//   int i = 1;
//   int count = 1;

//   while (i<=n){
//     int j = 1;
//     while (j<=n){
//       cout<<count<<" ";
//       count = count + 1;
//       j = j + 1;
//     }
//     cout<<endl;
//     i = i + 1;
//   }
// }




//printing nos in increasing format
// int main(){
//    int n;
//    cin>>n;

//   int row = 1;
//   while(row <= n){

//     int col = 1;
//     while(col<=row){
//       cout<< row;
//       col = col + 1;
//     }
//     cout<<endl;
//     row = row + 1;
//   }
// }



// printing pattern like 
// 1
// 23
// 345
// 4567
// 56789
// 678910 like this


// int main(){
//   int n ;
//   cin>>n;

//   int row = 1;

//   while(row<=n){
    
//     int col = 1;
//     int value = row;
//     while(col <= row){
//       cout<<value;
//       value = value + 1;
//       col = col + 1;

//     }
//     cout<<endl;
//     row = row + 1;
//   }
// }


//   int main(){
//   int n;
//   cin >>n;

//   int row=1;

//   while(row<=n){

//     int col = 1;
//     int value = 1;
//     while(col <= row){
//       cout<<value;
//       value = value + 1;
//       col = col + 1;
//     }
//     cout << endl;
//     row = row + 1;
//   }
// }


// int main(){
//   int n;
//   cin>>n;
   
//   int i = 1;

//   while(i <= n){

//     int j = 1;
//     while(j<=i){
//       cout<<(i-j+1)<<" ";
//       j = j + 1;
//     }
//     cout<<endl;
//     i = i + 1;
//   }
// }



// write a program to print A A A 
//                          B B B 
//                          C C C 
//                          D D D

// int main(){
//   int n;
//   cin>>n;

//   int row  = 1;
//   while(row<=n){
//     int col = 1;
//     while(col<=n){
//       char ch = 'A'+ row - 1;
//       cout << ch;
//       col = col + 1;
//     }
//     cout<<endl;
//     row = row + 1;
//   }
// }




// write a program to print A B C D E F 
//                          A B C D E F
//                          A B C D E F
//                          A B C D E F

// int main(){
//   int n;
//   cin>>n;

//   int row  = 1;
//   while(row<=n){
//     int col = 1;
//     while(col<=n){
//       char ch = 'A'+ col - 1;
//       cout << ch;
//       col = col + 1;
//     }
//     cout<<endl;
//     row = row + 1;
//   }
// }


// write a program to print    A B C
                            // D E F
                            // G H I 



// int main(){

//   int n;
//   cin>>n;

//   int row = 1;
//   while(row<=n){
//     int col = 1;
//     while(col <=n){
//       char ch = row + col - 1;
//       cout << ch;
//       col = col + 1;
//     }
//     cout<<endl;
//     row = row + 1;
//   }
// }




// write a program to print A 
//                          B C
//                          D E F 
//                          G H I J 
//                          K L M N O 



// int main(){
//   int n;
//   cin>>n;

//   int row = 1;

//   while(row <= n){
//     int col = 1;
//     while(col <=row){
//       char ch = ('A' + row - 1);
//       cout << ch;
//       col = col + 1;
//     }
//     cout<<endl;
//     row = row + 1;
//   }
// }


// WRITE A PROGRAM TO PRINT A PATTERN : A
//                                      B C
//                                      C D E
//                                      D E F G 
//                                      E F G H I 

// int main(){
//   int n;
//   cin>>n;

//   int row = 1;

//   while(row<=n){
//     int col = 1;

//     while(col<=row){
//       char ch = ('A' + row + col - 2);
//       cout<<ch;
//       col = col + 1;
//     }
//     cout<<endl;
//     row = row + 1;
//   }
// }



// WRITE A PROGRAM TO PRINT A PATTERN : D
//                                      C D
//                                      B C D 
//                                      A B C D 

// int main(){
//   int n;
//   cin>>n;

//   int row = 1;

//   while(row<=n){

//     int col = 1;
//     char ch = 'A' + n - row;
//     while(col<=row){      
//       cout<<ch;
//       ch = ch + 1;
//       col = col + 1;
//     }
//     cout<<endl;
//     row = row + 1;
//   }
// }






// WRITE A PROGRAN TO PRINT N = 4 THEN PRINT _ _ _ *
//                                           _ _ * *
//                                           _ * * *
//                                           * * * *


// int main(){
//   int n;
//   cin>>n;

//   int row = 1;

//   while (row <=n){

//     // space print karte hai pehle
//     int space = n-row;
//     while(space){
//       cout<<" ";
//       space = space - 1;
//     }

//     // star print karte hai ab
//     int col = 1;
//     while(col<=row){
//       cout<<"*";
//       col = col + 1;
//     }
//     cout<<endl;
//     row = row + 1;
//   }
// }






// write a program to print a pattern: n = 6 ******
//                                           *****
//                                           ****
//                                           ***
//                                           **
//                                           *

// int main(){
//   int n;
//   cin>> n;

//   int row = 1;
//   while(row<=n){
//     int col = 1;
//     int space = row - 1;                                       //Doubt hai es program main
//     while(space){
//       cout<<" ";
//       space = space-1; 
//   }
//   while(col<=n){
//     char ch = n - row + 1;
//     cout<<ch;
//     cout<<"*";

//     col = col + 1;
//   }
//   cout<<endl;
//   row = row + 1;
// }
// }


//  int main(){
//  int n;
//  cin>>n;

//  int row=1;
//  while(row<=n){
//     int col=1;
//     int space=row-1;
//     while(space){
    
//       cout<<" ";
//       space=space-1;
//   }
//   while(col<=n-row+1){
//       cout<<"*";
//       col=col+1;
//   }
//     cout<<endl;
//     row=row+1;
// }
// }



// print a shape like:    *
//                       ***
//                      *****
//                     *******
//                    *********
//                   ***********


// int main(){
//   int n ;
//   cin>>n;

//   int row = 1;

//   while(row<=n){

//     //printing space in triangle (1st triangle)
//     int space = n - row;
//     while(space){
//       cout<<" ";
//       space=space-1;
//     }

//     // printing 2nd triangle
//     int col = 1;
//     while(col<=row){
//       cout <<col;
//       col = col + 1;
//     }

//     // printing 3rd triangle
//     int start = row - 1;
//     while(start){
//       cout<<start;
//       start = start - 1 ;
//     }
//     cout<<endl;
//     row = row + 1;
//   }
// }



//  bitwise operator for loop and operator 
//  int main(){
//  int a = 3;
// int b = 6;

// cout<< (--a) <<endl;
// cout<< (++b) <<endl;
//  cout<< (a++) <<endl;
//  cout<< (a--) <<endl;

//  cout<< (--a) <<endl;
//  cout<< (++a) <<endl;
// // cout<< (++a) <<endl;

// }



// int main(){
//   int a = 1;
//   int b = 2;
   
//   if(a-- > 0 || ++b > 2){
//     cout<<"Stage1 - Inside if ";
//   }else{
//     cout<<"Stage2 - Inside else";
//   }
//   cout<<a<<""<<b<<endl;
// }


// int main(){
//   int number = 3;
//   cout << (25 * (++number));
// }
// output is 100


// int main(){
//   int number = 3 ;
//   cout<< (++number)<<endl;
// }

//output is 4

// int main(){
//   int a = 1;
//   int b = a++;
//   int c = ++a;
//   cout << (b)<<endl;
//   cout << (c)<<endl;
// }

// int main(){
//   int a = 1;
//   cout << (a++)<<endl;
//   cout << (++a)<<endl;
// }


// for loop in c++ DSA


// /* int main(){
//   int n ;
//   cout<<"enter the value of n"<<endl;
//   cin>> n;

//   cout<<"printing counts: "<<endl;
//   for (int i = 0; i<=n; i++){
//     cout<<i<<endl;
//   }
// } */


// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;

//   int sum = 0;

//   for (int i = 1; i<=n; i++){
//     // Sum =  Sum + 1 ;
//     sum +=1;
//     }
//     cout<<sum<< endl;
// }


// fibonacii series
// 0,1,1,2,3,5,8,13,21.....


// int main(){
//   int n ;
//   cout<<"Enter the number: "<<endl;
//   cin>>n;

//   int a = 0;
//   int b = 1;

//   for(int i = 1; i<=n; i++){
//     int nextNumber = a + b;
//     cout << nextNumber<<" "<<endl;
//     a = b;
//     b = nextNumber;
//   }

// }



/* A school method based C++ program to check if a
number is prime
#include <bits/stdc++.h>
using namespace std; */


/* binary to decimal conversion */


// #include<math.h>


// int main(){

//   int n;
//   cin>> n;

//   int ans = 0;
//   int i = 0;
//   while(n != 0){

//     int bit = n & 1;

//     ans = (bit + pow(10 , i)) + ans;

//     n = n >> 1;
//     i ++;  
  
//   }
//   cout<<" answer is "<< ans << endl;
// }


// reversing a number 
// #include<iostream>
// using  namespace std;
// int main()
// {
//   int num , rem , rev = 0;

//   cout << "Enter the number"<<endl;
//   cin>>num;
//   while (num!=0)
//   {
//     rem = num % 10;
//     rev = rem + (rev * 10);
//     num = num / 10;
//   }
//   cout<<"Reverse number is: = "<<rev<<endl;
//   cout<<endl;
//   return 0;
//    }

// // #include<iostream>
// using  namespace std;

// class Reverse {
// public:
//     int rev (int x) {

//       int ans = 0;
//       while(x != 0) {
        
//         int digit = x % 10;
//         ans = (ans * 10) + digit;
//         x = x / 10;
        
//       }
//       return ans;
//     }  
// };




// class Solution {
// public:
//     int reverse(int x) {
//         int n;
//         cin>>n;
//         int ans = 0;
//         while(x !=0){
            
//             int digit = x % 10;
            
//             if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
//                 return 0;
//              }
//         ans = (ans * 10 ) + digit;
//         x = x / 10;
            
//         }
//         return ans;
//     }
// };



// avg of 3 numbers 
/* #include<iostream>
using  namespace std;
int main(){

  int n , i ;

  float sum = 0.0 , avg;

  float num[] = {23,24,25,26};

  n = sizeof(num) / sizeof(num[0]);

  for ( i = 0; i < n; i++)
  
  sum += num[i];

  avg = sum / n;
  
  cout<<"avg of all array elements is "<<avg<<endl;

  return 0;

} */
// Switch statement 

// #include<iostream>
// using namespace std;
// int main(){

//   int num = '1';

//   cout<<num;
//   switch(num){
//     case 1: cout<<" First"<<endl;
//           break;

//     case '1': cout<<"Second"<<endl;
//             break;
//   }
//   return 0;

// }


// C program to demonstrate syntax of switch
// #include <iostream>
// using namespace std;
/* 
her than 1, 2 and 3");
		break;
	}
	return 0;// Driver Code
int main()
{
	int x = 2;
	switch (x) {
	case 1:
		printf("Choice is 1");
		break;
	case 2:
		printf("Choice is 2");
		break;
	case 3:
		printf("Choice is 3");
		break;
	default:
		printf("Choice ot
} */


/* int main (){
  int n = 5;
  switch(n){

  case 1: 
        cout<<"not a n this is 1"<<endl;
        break;
  case 2: 
        cout<<"not a n this is 2"<<endl;
        break;
  case 3: 
        cout<<"not a n this is 3"<<endl;
        break;
  case 4: 
        cout<<"not a n this is 4"<<endl;
        break;
  case 5: 
          cout<<"yes this is 5 you are great"<<endl;
          break;
  }
  return 0;
} */

// Calculator by switch statement 

/* int main(){
  int a , b;
  cout<<"Enter the value of a "<<endl;
  cin>> a;

  
  cout<<"enter the value of b "<< endl;
  cin>> b;

  char operation;
  cout<<"enter the operation you want to perform"<<endl;
  cin >> operation;


  switch (operation){

    case '+': cout <<(a + b) <<endl;
              break;
    case '-': cout <<(a - b) <<endl;
              break;
    case '*': cout<<(a * b) <<endl;
              break;
    case '/': cout<<(a / b) <<endl;
              break;
  }
  return 0;
} */
 

//  number prime or not 


/* int main (){
  int n , i;
  cin>> n;


  while(i% 2=0){
    cout<<"this is prime number"<<endl;
  }
  while(i% 2 = 1){
    cout<<"this is primr number"<<endl;
  }
  i = i++;
  return 0;
} */



// how to find squre root / qube root 
#include<iostream>
using namespace std;

/* int main(){
  int a , b;

  cin>> a >> b;

  int var = 1;

  for(int i=1; i<=b; i++){
    var = var * a;
  }
  cout<<"your ans is: "<< var << endl;

  return 0;
} */



/* int power(int a , int b){
  int ans = 1;
  for(int i = 1; i<=b; i++){
    ans = ans * a;
  }
  return ans;
}
int main(){
  int a , b;
  cin>> a >>b;
  int anss = power(a,b);
  cout<<"your ans "<< anss <<endl;
  return 0;
} */



// bool isEven(int a){
//   //odd / even
//   if(a & 1){
//     return 0;
//   }
//   else{
//     return 1;
//   }
// }
// int main(){
//   int num ;
//   cin>> num;
//   if(isEven(num)){
//     cout<<"number is even "<<endl;
//   }
//   else{
//     cout<<"number is odd"<< endl;
//   }
//   return 0;
// }





// printing countint

/* void printCounting(int n){

  for(int i = 1; i<=n; i++){
    cout<< i << " " ;
  }
  cout<<endl;
}

int main(){
  int n;
  cin>> n;

  printCounting(n);
  return 0;
} */


