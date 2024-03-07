int array_min(int integers[], int length);
int array_max(int integers[], int length);

int sum_min_max(int integers[], int length){
    if(length < 1){
        return -1;
    }

    return array_max(integers, length) + array_min(integers, length);
}

int array_min(int integers[], int length){
    if(length < 1){
        return -1;
    }

    int flag = integers[0];
    
    for(int i = 1; i < length; i++){
        if(integers[i] < flag){
            flag = integers[i];
        }
    }

    return flag;
}

int array_max(int integers[], int length){
    if(length < 1){
        return -1;
    }

    int flag = integers[0];
    
    for(int i = 1; i < length; i++){
        if(integers[i] > flag){
            flag = integers[i];
        }
    }

    return flag;
}