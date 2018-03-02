#include <iostream>
#include <typeinfo>
using namespace std;

// signed char, values from –128 to 127
// overflows at fib(12)
char fib2(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  char prev = 0;
  char curr = 1;
    for (int i=1; i<n; i++){
      int next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }
  
// unsigned char, values from 0 to 255
// overflows at fib(14)
unsigned char fib3(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  char prev = 0;
  char curr = 1;
    for (int i=1; i<n; i++){
      int next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }
  
// signed short int, values from –32,768 to 32,767
// overflows at fib(24)
short int fib4(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  int prev = 0;
  int curr = 1;
    for (int i=1; i<n; i++){
      int next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }
  

// unsigned short int, values from 0 to 65,535
// overflows at fib(25)
unsigned short int fib5(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  int prev = 0;
  int curr = 1;
    for (int i=1; i<n; i++){
      int next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  } 
  
// signed int, values from –2,147,483,648 to 2,147,483,647 
// overflows at fib(47)
int fib(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  int prev = 0;
  int curr = 1;
    for (int i=1; i<n; i++){
      int next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }
  

// unsigned int, values from 0 to 4,294,967,295
// overflows at fib(48)
unsigned int fib1(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  int prev = 0;
  int curr = 1;
    for (int i=1; i<n; i++){
      int next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }


// signed long long, values from 
// –9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
// overflows at fib(93)
long long fib6(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  long long prev = 0;
  long long curr = 1;
    for (int i=1; i<n; i++){
      long long next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }
  

// unsigned short int, values from 0 to 18,446,744,073,709,551,615
// overflows at fib(94)
unsigned long long fib7(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  long long prev = 0;
  long long curr = 1;
    for (int i=1; i<n; i++){
      long long next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }
  
  
int main() {
  
  printf("Fibonacci's nth element. \nInput the term you want to know: ");
  
  int n;
  cin>>n;
  
  if (n<12)
    printf("calculated with signed char:         %d \n", fib2(n));
  else {
    printf("%-37s" , "signed char overflows at the: ");
    printf("12th term.\n");
  }
  
  if (n<14)
    printf("calculated with unsigned char:       %d \n", fib3(n) );
  else {
    printf("%-37s" , "unsigned char overflows at the: ");
    printf("14th term.\n");
  }
  
  if (n<24)
    cout<<"calculated with signed short int:    "<<fib4(n)<<endl;
  else {
    printf("%-37s" , "signed short int overflows at the: ");
    printf("24th term.\n");
  }
  
  if (n<25)
    cout<<"calculated with unsigned short int:  "<<fib5(n)<<endl;
  else {
    printf("%-37s" , "unsigned short int overflows at the: ");
    printf("25th term.\n");
  }
  
  if (n<47)
    cout<<"calculated with signed int:          "<<fib(n)<<endl;
  else {
    printf("%-37s" , "signed int overflows at the: ");
    printf("47th term.\n");
  }
  
  if (n<48)
    cout<<"calculated with unsigned int:        "<<fib1(n)<<endl;
  else {
    printf("%-37s" , "unsigned int overflows at the: ");
    printf("48th term.\n");
  }

  if (n<93)
    cout<<"calculated with signed long long:    "<<fib6(n)<<endl;
  else {
    printf("%-37s" , "signed long long overflows at the: ");
    printf("93th term.\n");
  }
  
  if (n<94)
    cout<<"calculated with unsigned long long:  "<<fib7(n)<<endl;
  else {
    printf("%-37s" , "unsigned long long overflows at the: ");
    printf("94th term.\n");
  }
  
}
  
