#include<iostream>

extern int max_element(int array[], int n);

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
int total = 0;

total = max_element(array,n);

std::cout << total << std::endl;

}



return 0;

}