double array_mean(int array[], int n){

double total = 0;

for (int i = 0; i < n; i++){

    total = total + array[i];

}

return total/n;

}