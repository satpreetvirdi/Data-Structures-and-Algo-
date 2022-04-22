#include<iostream>
using namespace std;

// Tower of Hanoi
void TowerOfHanoi(int n ,char src , char helper, char dest){
    if(n==0){
        return;
    }

   TowerOfHanoi(n-1 ,src ,dest ,helper);
   cout<< "Move from "<<src<<" to "<<dest<<endl;
   TowerOfHanoi(n-1, helper,src ,dest);
};

int main (){
    TowerOfHanoi(3, 'A' ,'B' ,'C');

    return 0;
}