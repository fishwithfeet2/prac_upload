#include<iostream>


extern double array_mean(int array[], int n);

int main(){

int n = 0;

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
double a_mean = 0;

a_mean = array_mean(array,n);

std::cout << a_mean << std::endl;

}



return 0;

}