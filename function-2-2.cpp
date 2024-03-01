int max_element(int array[], int n){

int total = 0;
total = array[0];

for (int i = 0; i < n; i++){

    if (total < array[i]){

        total = array[i];

    }
    

}

return total;

}