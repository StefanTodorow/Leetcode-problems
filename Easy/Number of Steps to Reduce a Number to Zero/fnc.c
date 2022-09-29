int numberOfSteps(int num){
    char counter = 0;
    while(num) {
        if(!(num & 1 == 1))
            num /= 2;
        else
            num--;
        counter++;
    }
    return (int)counter;
}