bool is_palindrome(int integers[], int length){
    if(length < 1){
        return false;
    }

    int p1 = 0;
    int p2 = length - 1;

    while(p1 < p2){
        if(integers[p1] != integers[p2]){
            return false;
        }
        p1++;
        p2--;
    }

    return true;
}

int sum_array_elements(int integers[], int length){
    if(length < 1){
        return -1;
    }

    if(is_palindrome(integers, length)){
        int sum = 0;
        for(int i = 0; i < length; i++){
            sum += integers[i];
        }
        return sum;
    }
    else{
        return -2;
    }
}
int sum_if_palindrome(int integers[], int length){
    if(length < 1){
        return -1;
    }

    return sum_array_elements(integers, length);
}