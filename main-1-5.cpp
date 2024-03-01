#include<iostream>


extern int count_evens(int number);

int main(){

int number = 0;

std::cout << "please input a numba \n" << std::endl;
std::cin >> number;




if (number < 1){

return 0;

}
else{




int total = 0;

total = count_evens(number);

std::cout << total << std::endl;

}



return 0;

}