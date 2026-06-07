#include<iostream>
#include<vector>
using namespace std;
void createArray(vector<int> &array){
    int value;
    cout<<"ENter all elements: \n";
    for(int i=0; i<5; i++){
        cin>>value;
        array.push_back(value);
    }
}
void displayArray(vector<int> &array){
    cout<<"\nAll elements: \n";
    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }
}

void indexInsertion(vector<int> &array, int x, int ind){
    array.push_back(0);
    cout<<"\nAfter insertion:\n";
    for(int i=array.size()-1; i>=ind; i--){
        array[i+1]=array[i];
    }
    array[ind]=x;
}

void sortedInsertion(vector<int> &array, int x){
    int index;
    for(int i=0; i<array.size(); i++){
        if(array[i]>=x){
            index=i;
            break;
        }
    }
    indexInsertion(array, x, index);
}
int main(){
    vector<int> array;
    createArray(array);
    displayArray(array);
    int element = 12;
    int index = 2;
    int sorted = 16;
    indexInsertion(array, element, index);
    displayArray(array);
    sortedInsertion(array, sorted);
    displayArray(array);
}