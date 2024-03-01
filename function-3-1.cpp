bool is_fanarray(int array[], int n){


int fan = 0;

for (int i = 0; i < n; i++){
    
    if (array[i] == array[n-1-i]){

        fan = 1;
    }
    else {
        return false;
    }
}

if (fan == 1){

    return true;

}
}