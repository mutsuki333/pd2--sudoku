//
//
#include"Sudoku.h"
using namespace std;

void Sudoku::giveQuestion(){
    
    int ques[81]={0,2,1,6,0,0,0,0,3
        ,0,0,7,0,0,1,0,0,0
        ,0,0,0,7,0,0,9,5,0
        ,0,0,0,0,1,0,8,0,4
        ,0,3,0,0,8,0,0,2,0
        ,8,0,5,0,9,0,0,0,0
        ,0,5,3,0,0,2,0,0,0
        ,0,0,0,3,0,0,4,0,0
        ,2,0,0,0,0,4,1,3,0};
    
    for (int i=0; i<81; i++){
        cout<<ques[i]<<" ";
        if(i%9==8)cout<<endl;
    }
    
}