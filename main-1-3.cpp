#include<iostream>


extern int num_count(int array[], int n, int number);

int main(){

int n = 0;
int number = 0;

std::cout << "What is the number you want to check for? \n" << std::endl;
std::cin >> number;


std::cout << "What is the size of the array? \n" << std::endl;
std::cin >> n;

int array[n];

if (n < 1){

return 0;

}
else{
std::cout << "input the array \n" << std::endl;


for(int i = 0; i < n; i++){

   std::cin >> array[i];

}
int int_total = 0;

int_total = num_count(array,n,number);

std::cout << int_total << std::endl;

}



return 0;

}