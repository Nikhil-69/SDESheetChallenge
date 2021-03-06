int getAllWaysHelper(int remainingSum, int power, int base){
      //calculate power
    int result = pow(base, power);
       
    if(remainingSum == result)
        return 1;
    if(remainingSum < result)
        return 0;
      //Two recursive calls one to include current base's power in sum another to exclude
    int x = getAllWaysHelper(remainingSum - result, power, base + 1);
    int y = getAllWaysHelper(remainingSum, power, base+1);
    return x + y;
}
 
int getAllWays(int a, int b) {
    return getAllWaysHelper(a, b, 1);
}