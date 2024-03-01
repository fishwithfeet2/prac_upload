bool is_ascending(int array[], int n){

int count = 0;
int ascender = 0;

for (int i = 0; i < n; i++){

    if (count <= array[i]){

        count = array[i];
        ascender = 1;


    }
    else {

        return false;

    }
    

}

if (ascender == 1){

    return true;

}

}