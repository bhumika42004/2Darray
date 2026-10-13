#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
bool linearsearch(int matrix[4][3],int rows,int column,int key){
     rows=4;
     column=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            if(matrix[i][j]==key){
        return true;
            }
        }
    }
    return false;
}
void rowsum(int matrix[][3],int rows,int column){
    int maxsum=INT_MIN;
    for(int i=0;i<rows;i++){
        int rowsum=0;
    for(int j=0;j<column;j++){
    rowsum+=matrix[i][j];
    
   maxsum=max(rowsum,maxsum);
    }
}
    cout<<maxsum<<endl;
    
}
void colsum(int matrix[][3],int rows,int column){
    int maxcolsum=INT_MIN;
for(int j=0;j<column;j++){
    int colsum=0;
    for(int i=0;i<rows;i++){
        colsum+=matrix[i][j];
    }
    maxcolsum=max(colsum,maxcolsum);
}
cout<<maxcolsum<<endl;
}

int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows=4;
    int column=3;
    cout<<linearsearch(matrix,rows,column,12)<<endl;
    rowsum(matrix,rows,column);
    colsum(matrix,rows,column);
   
    return 0;
}