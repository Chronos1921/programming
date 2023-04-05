#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
    int arr[4][4]={{1,2,3,10},{4,5,6,20},{7,8,9,56},{78,98,50,51}};
        int row=4;
        int col=4;
        int count=0;
        int total=row*col;
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;
        while(count<total){
            for (int i = startingCol; i <= endingCol; i++)
            {
                cout<<arr[startingRow][i]<<" ";
                count++;
            }
            startingRow++;
            for (int i = startingRow; i <=endingRow; i++)
            {
                cout<<arr[i][endingCol]<<" ";
                count++;
            }
            endingCol--;
            for (int i = endingCol; i >=startingCol; i--)
            {
                cout<<arr[endingRow][i]<<" ";
                count++;
            }
            endingRow--;
            for (int i = endingRow; i >=startingRow; i--)
            {
                cout<<arr[i][startingCol]<<" ";
                count++;
            }
            startingCol++;
            
        }
    
    
}