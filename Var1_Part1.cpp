#include <iostream>

int main() {
     int a, i=0, sum=0;
    std::cout << "Enter array length" <<"\n";
    std::cin>>a;
    int b[a];
    while (a>i) {
        int c;
        std::cout <<"Enter element a["<<i<<"]";
        std::cin>>c;
        b[i]=c;
        i++;
        sum+=c;
    }
    std::cout <<"sum="<<sum;
    //nayti summu elementom massiva
    return 0;
}