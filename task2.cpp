#include <iostream>

using namespace std;

struct Patient
{
    string name;
    string id;
    int priority;
};

int main(){
    Patient arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i].name;
        cin>>arr[i].id;
        cin>>arr[i].priority;
    }

    for (int i = 1; i < 5; i++) {
        Patient insert = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j].priority < insert.priority) {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = insert;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i].name<<endl;
    }
    
    return 0;
}
