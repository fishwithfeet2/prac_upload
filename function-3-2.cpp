#include<iostream>
#include<algorithm>


double median_array(int array[], int n){

float median1 = 0;
float median2 = 0;

std::sort(array, array + n);
for (int i = 0; i < n; i++){
    std::cout << array[i] << std::endl;
}

if (n % 2 == 0){
    median1 = (array[n/2] + array[n/2+1])/2.0;
    std::cout << median1 << std::endl;
    

}
else{

    median2 = array[n/2];
    return median2;
}

return median1;






}