#include<iostream>

extern void two_five_nine(int array[], int n);

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


two_five_nine(array,n);

}



return 0;

}