int count_evens(int number){

int count = 0;

for(int i = 2; i <= number; i++){

    if(i % 2 == 0 ){
    count++ ;
    }

}

return count;
}