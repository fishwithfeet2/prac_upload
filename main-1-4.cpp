#include<iostream>


extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(){

int n = 0;

std::cout << "What is the size of the arrays? \n" << std::endl;
std::cin >> n;

int array[n];
int secondarray[n];

if (n < 1){

return 0;

}
else{
std::cout << "input the first array \n" << std::endl;


for(int i = 0; i < n; i++){

   std::cin >> array[i];

}

std::cout << "input the second array \n" << std::endl;


for(int i = 0; i < n; i++){

   std::cin >> secondarray[i];

}


int total = 0;

total = sum_two_arrays(array,secondarray,n);

std::cout << total << std::endl;

}



return 0;

}