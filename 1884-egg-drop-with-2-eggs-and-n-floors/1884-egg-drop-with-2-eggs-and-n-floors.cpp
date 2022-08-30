class Solution {
public:
    int twoEggDrop(int n) {
        int i=0;
        while(n>i*(i+1)/2)
            i++;
        return i;
    }
};