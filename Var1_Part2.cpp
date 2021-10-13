#include <iostream>
#include "stdlib.h"
int main() {
    int n,m,i=0,j=0;
    //bool exx=true;
    std::cout <<"Enter ze number of lines:";
    std::cin>>n;
    std::cout<<"Enter ze number of columns:";
    std::cin>>m;
    int a[m][n];
    int vector[m];
    srand(1);
    while (i<m){
        while (j<n){
            a[i][j]=rand();
            if (exx==true){
                vector[j]=rand();
                exx=false;
            }
            j++;
        }
        //vector[i]=rand();
        exx=true;
        i++;

    }
    int new_vector[n];
    for (int x=0;x<m;x++){
        int sum=0;
        for (int y=0;y<n;y++){
            sum+=a[x][y]*vector[y];

        }
        new_vector[x]=sum;
    }
    std::cout<<"Vector coordinates:{";
    for (int i:new_vector){
        std::cout<<i <<";";

    }
    std::cout<<"}";


    return 0;
}
